#include <iostream>

#include "adaptee_a.h"

void AdapteeA::Operation(int param1, int param2)
{
    std::cout << "AdapteeA::Operation(" << param1 << ", " << param2 << ")\n";
}
