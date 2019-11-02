//
// Created by sormunen on 2.11.2019.
//

#ifndef INHERITANCECONCEPT_MANAGEDCLASS_H
#define INHERITANCECONCEPT_MANAGEDCLASS_H


#include "AbstractClass.h"

class ManagedClass: public AbstractClass {
public:
    ManagedClass(PointerClass* pointerClass);
    int someFunction();
};


#endif //INHERITANCECONCEPT_MANAGEDCLASS_H
