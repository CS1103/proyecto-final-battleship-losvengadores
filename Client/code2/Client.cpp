//
// Created by Usuario on 11/27/2019.
//


#include "Client.h"

void Client::save() {
    filesystem::create_directory(filesystem::current_path()/ "../../in");
    filesystem::path in=filesystem::current_path()/"../../in";
    fstream myfile(in/"InPrimero.in",ios::out);
    myfile<<"HANDSHAKE=LosVengadores";
    myfile.close();

}
/*
void Client::Load() {
    string action_;
    string key_;
    string value_;
    string status;
    string scope;
    string message;
    filesystem::path out=filesystem::current_path()/"../../out";
    fstream myfile(out/"FirstPlayer1.out",ios::in);
    string line_;
    getline(myfile,line_);
    stringstream first_(line_);
    getline(first_,action_);
    if(action_=="HANDSHAKE"){
        getline(myfile,line_);
        stringstream second_(line_);
        getline(second_, key_, '=');
        getline(second_, value_);
        status=value_;
        getline(myfile,line_);
        stringstream third_(line_);
        getline(third_, key_, '=');
        getline(third_, value_);
        //token=value_;
        getline(myfile,line_);
        stringstream four_(line_);
        getline(four_, key_, '=');
        getline(four_, value_);
        scope=value_;
        getline(myfile,line_);
        stringstream five_(line_);
        getline(five_, key_, '=');
        getline(five_, value_);
        message=value_;
    }

    cout<<action_<<"\n";
    cout<<status<<"\n";
  //  cout<<token<<"\n";
    cout<<scope<<"\n";
    cout<<message<<"\n";
}*/

statement_t push_statement(const path_t& file_name){
    fstream myfile(file_name.generic_string(),ios::in);
    if (!myfile.is_open())
        throw std::runtime_error("no open");

    std::string line_;
    std::getline(myfile, line_);
    std::stringstream first_(line_);

    std::string key_;
    std::string value_;
    std::getline(first_, key_);

    statement_t result {};
    if (key_ == "HANDSHAKE") {
        result.action = action_t::start;
        getline(myfile, line_);
        stringstream second_(line_);
        getline(second_, key_, '=');
        getline(second_, value_);
        if (value_=="ACCEPTED")
            result.status = status_t::accepted;
        else result.status=status_t::rejected;
        getline(myfile, line_);
        stringstream third_(line_);
        getline(third_, key_, '=');
        getline(third_, value_);
        result.token= value_;
        getline(myfile, line_);
        stringstream four_(line_);
        getline(four_, key_, '=');
        getline(four_, value_);
        result.scope = value_;
        result.message=message_t::ok;
    }
    else if (key_ == "PLACEFEET") {
        result.action = action_t::build;
        std::getline(myfile, line_);
        std::stringstream second_(line_);
        result.status=status_t::accepted;
        std::getline(myfile, line_);
        std::stringstream third_(line_);
        std::getline(third_, key_, '=');
        std::getline(third_, value_);
        if (value_ == "CONTINUE")
            result.message = message_t ::ok;
        else if (value_ == "COMPLETE")
            result.message = message_t ::model_full;
        else if (value_ == "FULL")
            result.message = message_t ::fleet_full;
        else if (value_ == "BUSY")
            result.message = message_t ::busy;
        else if (value_ == "OUTSIDE")
            result.message = message_t ::outside;
    }
    else if (key_=="ATTACK"){
        result.action = action_t::attack;
        std::getline(myfile, line_);
        std::stringstream second_(line_);
        result.status=status_t::accepted;
        std::getline(myfile, line_);
        std::stringstream third_(line_);
        std::getline(third_, key_, '=');
        std::getline(third_, value_);
        if (value_ == "FAILED")
            result.message = message_t :: failed;
        else if (value_ == "DAMAGED")
            result.message = message_t ::damaged;
        else if (value_ == "DESTROYED")
            result.message = message_t ::destroyed;
        else if (value_ == "GAMEOVER")
            result.message = message_t ::game_over;
        else if (value_ == "WINNER")
            result.message = message_t ::winner;
    }
    myfile.close();

    /*
    if(result.action==action_t::build)
    cout << "build" << "\n";
    else if(result.action==action_t::attack)
        cout<<"atack"<<"\n";
    else if(result.action==action_t::start)
        cout<<"start"<<"\n";
    */
    return result;
}

void Client::load() {
    auto end_ = filesystem::directory_iterator{};
    std::error_code e;
    while(true) {
        try {
            filesystem::directory_iterator di_{filesystem::current_path() / "../../out"};
            while (di_ != end_) {
                statements_.push(push_statement(*di_));
                filesystem::remove(*di_++, e);
                if (e)
                    std::cerr << e.message() << "\n";
            }
        }
        catch (const std::exception &e) {
            std::cerr << e.what();
        }
    }
}




