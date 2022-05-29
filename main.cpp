#include "include/Product.hpp"
#include "include/Helpers.hpp"
#include "include/Client.hpp"
#include "include/Sale.hpp"
#include <iostream>

int main(){
    Product example("Desktop computer", 130000.0, "Computer for gamers.", 3, Product::ProductType::ELECTRONIC);
    Client client1("email@email.com", "098765432111", "Name Client", "88 918253426");
}