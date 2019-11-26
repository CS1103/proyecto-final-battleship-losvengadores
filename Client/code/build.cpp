
#include "build.h"

void build::Handshake() {
    myfile.open ("Primero.in,std::ios::out");
    myfile<<"HANDSHAKE=LosVengadores";
    myfile.close();
}

void build::ReadFileForToken() {
    myfile.open("Primero.out");

}

void build::RegisterPostitions() {


}
