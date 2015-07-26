#ifndef INTERPRETER_TERMINAL_EXPRESSION_H_
#define INTERPRETER_TERMINAL_EXPRESSION_H_

#include "AbstractExpression.h"

class TerminalExpression : public AbstractExpression
{
public:
    virtual void Interpret(Context& context) override;

    virtual ~TerminalExpression();
};


#endif