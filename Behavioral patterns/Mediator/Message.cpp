#include "stdafx.h"
#include "Message.h"

const std::string& Message::Text() const
{
    return text_;
}

Message::Message(const std::string& text) : text_(text)
{

}
