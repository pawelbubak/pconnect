#include "core/connector.h"

#include <iostream>

void Connector::send(procid_t receiver, char *message, size_t size) {
    std::cout << "send" << std::endl;
}

void Connector::broadcast(char *message, size_t size) {
    std::cout << "broadcast" << std::endl;
}

void Connector::new_message_arrived(procid_t sender, char *message, size_t size) {
    std::cout << "new_message_arrived" << std::endl;
}

void Connector::say_hello() {
    std::cout << "Connector said hello!" << std::endl;
}
