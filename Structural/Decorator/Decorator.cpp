//
// Created by yrs on 11/19/25.
//

#include "Decorator.h"

void ClientCodeDecorator(Component* component) {
    // ...
    std::cout << "RESULT: " << component->Operation();
    // ...
}

void decoratorTest() {
    /**
   * This way the client code can support both simple components...
   */
    Component* simple = new ConcreteComponent;
    std::cout << "Client: I've got a simple component:\n";
    ClientCodeDecorator(simple);
    std::cout << "\n\n";
    /**
     * ...as well as decorated ones.
     *
     * Note how decorators can wrap not only simple components but the other
     * decorators as well.
     */
    Component* decorator1 = new ConcreteDecoratorA(simple);
    Component* decorator2 = new ConcreteDecoratorB(decorator1);
    std::cout << "Client: Now I've got a decorated component:\n";
    ClientCodeDecorator(decorator2);
    std::cout << "\n";

    delete simple;
    delete decorator1;
    delete decorator2;
}
