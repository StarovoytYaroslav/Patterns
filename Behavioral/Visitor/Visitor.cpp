//
// Created by yrs on 19.11.25.
//

#include "Visitor.h"

void ClientCodeV(std::array<const Component *, 2> components, Visitor *visitor) {
    // ...
    for (const Component *comp : components) {
        comp->Accept(visitor);
    }
    // ...
}

void visitorTest() {
    std::array<const Component *, 2> components = {new ConcreteComponentA, new ConcreteComponentB};
    std::cout << "The client code works with all visitors via the base Visitor interface:\n";
    ConcreteVisitor1 *visitor1 = new ConcreteVisitor1;
    ClientCodeV(components, visitor1);
    std::cout << "\n";
    std::cout << "It allows the same client code to work with different types of visitors:\n";
    ConcreteVisitor2 *visitor2 = new ConcreteVisitor2;
    ClientCodeV(components, visitor2);

    for (const Component *comp : components) {
        delete comp;
    }
    delete visitor1;
    delete visitor2;
}