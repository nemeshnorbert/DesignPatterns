#ifndef FLYWEIGHT_FLYWEIGHT_H_
#define FLYWEIGHT_FLYWEIGHT_H_

#include "State.h"

class Flyweight
{
public:
    virtual void Operation(const State& state) = 0;

    virtual ~Flyweight();
};


#endif


