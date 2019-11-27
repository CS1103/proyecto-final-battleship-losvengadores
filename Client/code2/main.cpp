#include <iostream>
#include "build.h"
#include <fstream>
#include <sstream>
int main() {
    build p;
    p.Handshake();
/*
    filesystem::create_directory(filesystem::current_path()/ "../../in");
    filesystem::path in=filesystem::current_path()/"../../in";
    fstream myfile(in/"Primero.txt",ios::out);
    myfile<<"HANDSHAKE=LosVengadores";
    myfile.close();
    */
    std::cout << "Hello, World!" << std::endl;
    return 0;
}