#include "stdafx.h"
#include "DecoratorA.h"

#include <iostream>

DecoratorA::~DecoratorA()
{

}

void DecoratorA::Operation()
{
    Decorator::Operation();
    std::cout << message_ << '\n';
}

void DecoratorA::SetMessage(const std::string message)
{
    message_ = message;
}

DecoratorA::DecoratorA(std::shared_ptr<Component> component) : Decorator(component)
{

}
