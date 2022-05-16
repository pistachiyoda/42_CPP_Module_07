#include "iter.hpp"
#include <iostream>

void func(int val)
{
    std::cout << val << std::endl;
}

int main (void)
{
    int array[] = {1, 2, 3, 4, 5};

    iter(array, 5, &func);
}
