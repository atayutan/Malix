#include "PrintlnStatement.h"

void PrintlnStatement::execute() {
    std::cout << expression->eval().getStringValue() << std::endl;
}

PrintlnStatement::~PrintlnStatement() {
    delete expression;
}
