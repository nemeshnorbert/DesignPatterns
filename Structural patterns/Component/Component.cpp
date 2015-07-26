#include "stdafx.h"
#include "Component.h"

Component::~Component()
{

}

const std::string& Component::Id() const
{
    return id;
}

Component::Component(const std::string& name) : id(name)
{

}
