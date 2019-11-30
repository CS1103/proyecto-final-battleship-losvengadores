
#include "build.h"

void build::Handshake() {
    filesystem::create_directory(filesystem::current_path()/ "../first");
    filesystem::path first=filesystem::current_path()/"../first";

    myfile.open ("Primero.in",ios::out);
    myfile<<"HANDSHAKE=LosVengadores";
    myfile.close();
    auto it = filesystem::directory_iterator("first");
    filesystem::remove(*it);
}

void build::ReadFileForToken() {
    //myfile.open("Primero.out");

}

void build::RegisterPostitions() {


}
