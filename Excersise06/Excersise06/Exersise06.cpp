#include <iostream>
#include "GrowingConteiner.h";


int main()
{
    //_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    GrowingConteiner<int,2> test{};
    test.Add(6);
    test.Add(7);
    test.Add(8);
    std::cout << test[2];

}
