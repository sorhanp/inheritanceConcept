#include <iostream>

#include "ManagerClass.h"

int main()
{
    std::cout<<"Hello, World!"<<std::endl;

    PointerClass pointerClass;
    ManagerClass managerClass(&pointerClass);

    std::cout<<managerClass.CallManagedClass1()<<std::endl;
    std::cout<<managerClass.CallManagedClass2()<<std::endl;

    return 0;
}
