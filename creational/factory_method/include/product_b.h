#ifndef FACTORY_METHOD_PRODUCT_B_H_
#define FACTORY_METHOD_PRODUCT_B_H_

#include "abstract_product.h"

class ProductB : public AbstractProduct
{
public:
    virtual void Operation() override;

    virtual ~ProductB();
};

#endif
