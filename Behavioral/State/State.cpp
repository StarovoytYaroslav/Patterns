//
// Created by yrs on 19.11.25.
//

#include "State.h"

void stateTest() {
    Context *context = new Context(new ConcreteStateA);
    context->Request1();
    context->Request2();
    delete context;
}