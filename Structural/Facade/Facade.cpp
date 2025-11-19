//
// Created by yrs on 11/19/25.
//

#include "Facade.h"

void ClientCodeFacade(Facade *facade) {
    // ...
    std::cout << facade->Operation();
    // ...
}

void facadeTest() {
    Subsystem1 *subsystem1 = new Subsystem1;
    Subsystem2 *subsystem2 = new Subsystem2;
    Facade *facade = new Facade(subsystem1, subsystem2);
    ClientCodeFacade(facade);

    delete facade;
}
