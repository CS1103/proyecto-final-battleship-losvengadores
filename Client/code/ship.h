#ifndef CODE_SHIP_H
#define CODE_SHIP_H

#include "includes.h"

struct ship{
    string tipo;
    pair<char,int> pos;
    ship(string tipo){
        this->tipo = tipo;
    }
    ship(){};
};

#endif //CODE_SHIP_H
