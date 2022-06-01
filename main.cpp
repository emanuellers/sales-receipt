#include "include/Product.hpp"
#include "include/Helpers.hpp"
#include "include/Client.hpp"
#include "include/Sale.hpp"
#include <iostream>

int main(){
    Product product1("Desktop computer", 130000.0, "Computer for gamers.", 3, Product::ProductType::ELECTRONIC);
    Client client1("email@email.com", "098765432111", "Name Client", "88 918253426");
    Sale sale1(client1.getEmail());
    std::vector<Sale::boughtProduct> array = sale1.addProductsToSale("1", 3);
    std::cout << array[0].productId << std::endl;
}