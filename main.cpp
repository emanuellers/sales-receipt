#include "include/Product.hpp"
#include "include/Helpers.hpp"
#include <iostream>

int main(){
    Product example("Desktop computer", 130000.0, "Computer for gamers.", 3, Product::ProductType::ELECTRONIC);
    std::cout << example.getDescription() <<std::endl ;
}