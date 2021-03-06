#ifndef STATE_CONCRETE_STATE_A_H_
#define STATE_CONCRETE_STATE_A_H_

#include "context.h"
#include "abstract_state.h"

class ConcreteStateA : public AbstractState
{
private:
    ConcreteStateA();

    ConcreteStateA(const ConcreteStateA&) = delete;

    ConcreteStateA& operator = (const ConcreteStateA&) = delete;

public:
    static ConcreteStateA* Instance();

    virtual void Handle(Context* context) override;

    virtual ~ConcreteStateA();
};

#endif



