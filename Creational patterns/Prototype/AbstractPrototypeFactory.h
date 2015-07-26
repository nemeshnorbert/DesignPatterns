#ifndef PROTOTYPE_ABSTRACT_PROTOTYPE_FACTORY_H_
#define PROTOTYPE_ABSTRACT_PROTOTYPE_FACTORY_H_

#include <memory>
#include "AbstractPrototypeX.h"
#include "AbstractPrototypeY.h"

class AbstractPrototypeFactory
{
public:
    virtual std::shared_ptr<AbstractPrototypeX> CreatePrototypeX(int param1) = 0;

    virtual std::shared_ptr<AbstractPrototypeY> CreatePrototypeY(int param1, int param2) = 0;

    virtual ~AbstractPrototypeFactory();
};


#endif