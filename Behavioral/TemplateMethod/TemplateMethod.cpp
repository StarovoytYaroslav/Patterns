//
// Created by yrs on 19.11.25.
//

#include "TemplateMethod.h"

void ClientCodeTM(AbstractClass *class_) {
    // ...
    class_->TemplateMethod();
    // ...
}


void templateMethodTest() {
    std::cout << "Same client code can work with different subclasses:\n";
    ConcreteClass1 *concreteClass1 = new ConcreteClass1;
    ClientCodeTM(concreteClass1);
    std::cout << "\n";
    std::cout << "Same client code can work with different subclasses:\n";
    ConcreteClass2 *concreteClass2 = new ConcreteClass2;
    ClientCodeTM(concreteClass2);
    delete concreteClass1;
    delete concreteClass2;
}