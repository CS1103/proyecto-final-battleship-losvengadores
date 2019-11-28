//
// Created by Usuario on 11/27/2019.
//

#ifndef CODE2_CLIENT_H
#define CODE2_CLIENT_H


#include "includes.h"
#include <fstream>
#include <sstream>
#include <filesystem>
#include <queue>
using namespace std;

struct statement_t {
    action_t action;
    text_t token;
    status_t status;
    text_t scope;
    message_t message;
};

using statement_list_t = queue<statement_t>;

class Client {

private:
    statement_list_t statements_;

public:
    void load();
    void save();


    void RegisterPostitions();

};


#endif //CODE2_CLIENT_H
