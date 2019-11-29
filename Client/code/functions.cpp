#include "functions.h"

vector<ship> crearFlota(){
    vector<ship>flota;
    for(int i = 0;i < 9; i++){
        ship s;
        string tipo;
        cin >> tipo;
        s.tipo=tipo;
        flota.push_back(s);
    }
    setPos(flota);
    return flota;
}

vector<ship> setPos(vector<ship>& f){
    vector<pair<char,int>> positions;
    for (int i =0; i < 9; i++){
        pair<char,int> pos;
        cin >> pos.first >>  pos.second;
        positions.push_back(pos);
    }
    int a = 0;
    for(auto& it : f){
        if(it.tipo == "AircraftCarrier"){
            it.pos = positions[a]; a++;
        }
        else if(it.tipo == "Battlecruiser"){
            it.pos = positions[a]; a++;
        }
        else if(it.tipo =="Submarine"){
            it.pos = positions[a]; a++;
        }
        else{
            it.pos = positions[a]; a++;
        }
    }
    return f;
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
}





