//
// Created by pawel on 21.10.2019.
//

#ifndef PCONNECT_CONNECTOR_H
#define PCONNECT_CONNECTOR_H

#include <cstdint>
#include <cstdio>

typedef uint8_t procid_t;

class Connector {
    void send(procid_t receiver, char *message, size_t size);

    void broadcast(char *message, size_t size);

    void new_message_arrived(procid_t sender, char *message, size_t size);

public:
    void say_hello();
};


#endif //PCONNECT_CONNECTOR_H
