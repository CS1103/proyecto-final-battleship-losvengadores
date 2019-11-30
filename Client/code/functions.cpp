#include "functions.h"

vector<ship> crearFlota(){
    vector<ship>flota;
    string path = "/home/eduardo/Desktop/Utec/Poo2/proyecto-final-battleship-losvengadores/Client/code/barcos.text";
    char orientation, posX;
    pair<char,int> position;
    string sPosy;
    int posY;
    auto file = readFile(path);
    string line;
    int num = 0;
    while(getline(file,line)) {
        ship s;
        if(line == "Aircraft Carrier"){
            s.model = 'A';
        }
        else if(line == "Battlecruisers"){
            s.model = 'B';
        }
        else if(line == "Submarines"){
            s.model = 'S';
        }
        else if(line == "Torpedo boat"){
            s.model = 'T';
        }
        getline(file, line);
        if(line.size()==5){

        }
        auto itF = find(line.begin(), line.end(),' ');
        auto beg = line.begin();
        orientation = '\0';
        while(beg != itF){
            orientation += *beg;
            beg++;
        }
        auto itF2 = find(++itF,line.end(),' ');
        posX = '\0';
        while(itF != itF2){
            posX += *itF;
            itF++;
        }
        auto itF3= find(++itF2,line.end(),' ');
        sPosy = "";
        while(itF2 != itF3){
            sPosy+=*itF2;
            itF2++;
        }
        posY = stoi(sPosy);
        position.first = posX; position.second = posY;
        s.location = position; s.orientation = orientation;
        flota.push_back(s);
    }
    file.close();
    return flota;
}





fstream readFile(string fileName){
    fstream rFile;
    rFile.open(fileName,ios::in);
    if(!rFile.is_open()){
        cerr << "Error al abrir archivo!";
        return rFile;
    }
    else{
        return rFile;
    }
}

fstream writeFile(string fileName){
    fstream wFile;
    wFile.open(fileName,ios::out);
    if(!wFile.is_open()){
        cerr << "Erro al abrir el archivo!";
        return wFile;
    }
    else{
        return wFile;
    }
}





