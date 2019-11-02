//
// Created by sormunen on 2.11.2019.
//

#ifndef INHERITANCECONCEPT_ABSTRACTCLASS_H
#define INHERITANCECONCEPT_ABSTRACTCLASS_H


#include "PointerClass.h"

class AbstractClass {

protected:
    static PointerClass* pointerClass;
    virtual int someFunction() = 0;
public:

};


#endif //INHERITANCECONCEPT_ABSTRACTCLASS_H
