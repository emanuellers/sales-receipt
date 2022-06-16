#include "Client.hpp"

Client::Client(std::string email, std::string cpf, std::string name, std::string telephone):
email(email),
cpf(cpf),
name(name),
telephone(telephone)
{};

std::string Client::getEmail(){
    return email;
};

std::string Client::getCpf(){
    return cpf;
};

std::string Client::getName(){
    return name;
};

std::string Client::getTelephone(){
    return telephone;
};