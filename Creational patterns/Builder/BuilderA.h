#ifndef BUILDER_BUILDER_A_H_
#define BUILDER_BUILDER_A_H_

#include "Product.h"
#include "AbstractBuilder.h"

class BuilderA : public AbstractBuilder
{
public:
    BuilderA();

    void BuildPartX() override;

    void BuildPartY() override;

    void BuildPartZ() override;

    std::shared_ptr<Product> GetProduct() override;

    virtual ~BuilderA();

private:
    std::shared_ptr<Product> product_;
};


#endif


