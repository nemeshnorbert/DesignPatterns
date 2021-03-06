#include "invoker.h"

void Invoker::ExecuteCommand()
{
    command_->Execute();
}

void Invoker::StoreCommand(std::shared_ptr<Command> command)
{
    command_ = command;
}
