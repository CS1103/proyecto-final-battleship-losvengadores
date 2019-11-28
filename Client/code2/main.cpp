#include <iostream>
#include "Client.h"
#include <fstream>
#include <sstream>
int main() {
    Client p;
    //p.Save();
    //p.Load();
    p.load();
    std::cout << "\nHello, World!" << std::endl;
    return 0;
}