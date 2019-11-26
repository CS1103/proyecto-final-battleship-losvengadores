
#include "includes.h"


fstream OpenFile(string file_name){
    fstream archivo;
    archivo.open(file_name,ios::in);

    if(archivo.is_open())
        return archivo;
    else{
        cout << "error de lectura";
        return archivo;
    }
}

