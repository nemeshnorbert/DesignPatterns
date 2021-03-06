#ifndef MEMENTO_ORIGINATOR_H_
#define MEMENTO_ORIGINATOR_H_

#include <memory>

#include "state.h"
#include "memento.h"

class Originator
{
public:
    Originator(int data);

    std::shared_ptr<Memento> CreateMemento();

    void AcquireMemento(std::shared_ptr<Memento> memento);

private:
    std::shared_ptr<State> state_;
};


#endif
