//
// Created by sormunen on 2.11.2019.
//

#ifndef INHERITANCECONCEPT_MANAGERCLASS_H
#define INHERITANCECONCEPT_MANAGERCLASS_H


#include "ManagedClass.h"

class ManagerClass{
private:
    ManagedClass managedClass1;
    ManagedClass managedClass2;
public:
    ManagerClass(PointerClass* pointerClass);
    int CallManagedClass1();
    int CallManagedClass2();
};


#endif //INHERITANCECONCEPT_MANAGERCLASS_H
