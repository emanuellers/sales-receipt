#include "TableTemplate.hpp"

class Client : public TableTemplate{
private:
    std::string email;
    std::string cpf;
    std::string name;
    std::string telephone;

public:
    Client(std::string email, std::string cpf, std::string name, std::string telephone);
    std::string getEmail();
    std::string getCpf();
    std::string getName();
    std::string getTelephone();
};