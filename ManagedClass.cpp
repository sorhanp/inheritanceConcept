//
// Created by sormunen on 2.11.2019.
//

#include "ManagedClass.h"

ManagedClass::ManagedClass(PointerClass* pointerClass) {
    ManagedClass::pointerClass = pointerClass;
}

int ManagedClass::someFunction() {
    return pointerClass->doSomething(2);
}