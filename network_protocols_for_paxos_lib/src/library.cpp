#include "library.h"
#include "core/connector.h"

#include <iostream>

void hello() {
    std::cout << "Hello, World!" << std::endl;
    auto* connector = new Connector();
    connector->say_hello();
}