#ifndef MALIX_CONTINUESTATEMENT_H
#define MALIX_CONTINUESTATEMENT_H


#include <exception>
#include "Statement.h"

class ContinueStatement : public Statement, std::exception {
public:
    void execute() override;
};


#endif //MALIX_CONTINUESTATEMENT_H
