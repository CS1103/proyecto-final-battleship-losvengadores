//
// Created by Usuario on 11/27/2019.
//

#ifndef CODE2_BUILD_H
#define CODE2_BUILD_H


#include "includes.h"
#include <fstream>
#include <sstream>
#include <filesystem>
using namespace std;

class build {

private:
    string token;
    fstream myfile;

public:
    void Handshake();
    void ReadFileForToken();
    void RegisterPostitions();

};


#endif //CODE2_BUILD_H
