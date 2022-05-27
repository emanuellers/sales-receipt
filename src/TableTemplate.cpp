#include <string>
#include "include/TableTemplate.hpp"


std::string TableTemplate::classToTemplateTable(TableTemplate::Classes identifier){
    switch (identifier)
    {
    case TableTemplate::Classes::CLIENT:
       return "CREATE TABLE IF NOT EXISTS client( id INT PRIMARY KEY  NOT NULL, email, cpf, name, telephone TEXT NOT NULL);";
    case TableTemplate::Classes::PRODUCT:
       return "CREATE TABLE IF NOT EXISTS product( id INT PRIMARY KEY  NOT NULL, name, description, type TEXT NOT NULL, price, amount INT NOT NULL);";
    case TableTemplate::Classes::SALE:
        return "CREATE TABLE IF NOT EXISTS sale(id INT PRIMARY KEY  NOT NULL, clientEmail, products TEXT NOT NULL, totalPrice INT NOT NULL, FOREIGN KEY(clientEmail) )";
    default:
        break;
    }
    
}