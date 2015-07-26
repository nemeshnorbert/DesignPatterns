#ifndef BUILDER_DIRECTOR_H_
#define BUILDER_DIRECTOR_H_

#include "Product.h"
#include "AbstractBuilder.h"

class Director
{
public:
    Director(std::shared_ptr<AbstractBuilder> builder);

    std::shared_ptr<Product> GetProduct();

private:
    std::shared_ptr<AbstractBuilder> builder_;
};


#endif