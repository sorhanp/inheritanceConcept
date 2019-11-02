//
// Created by sormunen on 2.11.2019.
//

#include "ManagerClass.h"

ManagerClass::ManagerClass(PointerClass* pointerClass):
        managedClass1(pointerClass),
        managedClass2(pointerClass)
{

}

int ManagerClass::CallManagedClass1() {
    return managedClass1.someFunction();
}

int ManagerClass::CallManagedClass2() {
    return managedClass2.someFunction();
}