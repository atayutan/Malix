#include "Variables.h"

std::map<std::string, Value> Variables::variables = std::map<std::string, Value>();

void Variables::setVariable(std::string name, Value value) {
    variables[name] = std::move(value);
}

bool Variables::exists(std::string name) {
    auto it = variables.find(name);
    return it == variables.end();
}

Value Variables::getVariable(std::string name) {
    auto it = variables.find(name);

    if (it != variables.end()) return it->second;
    else {
        setVariable(name, Value());
        return getVariable(name);
    }
}
