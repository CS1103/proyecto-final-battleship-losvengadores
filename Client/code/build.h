//
// Created by Maor Roizman Gheiler on 26/11/19.
//

#ifndef CODE_BUILD_H
#define CODE_BUILD_H

#include <iostream>
#include <string>

using namespace std;

class build {

private:
    string token;


public:
    void Handshake();
    void ReadFileForToken();
    void RegisterPostitions();

};


#endif //CODE_BUILD_H
