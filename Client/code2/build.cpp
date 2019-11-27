//
// Created by Usuario on 11/27/2019.
//


#include "build.h"

void build::Handshake() {
    filesystem::create_directory(filesystem::current_path()/ "../../in");
    filesystem::path in=filesystem::current_path()/"../../in";
    fstream myfile(in/"Primero.txt",ios::out);
    myfile<<"HANDSHAKE=LosVengadores";
    myfile.close();

    //deleteHanshake;

}

void build::ReadFileForToken() {
    //myfile.open("Primero.out");

}

void build::RegisterPostitions() {


}
