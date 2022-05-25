#include "include/Product.hpp"
#include "include/Helpers.hpp"

int main(){
    Product example("Desktop computer", 130000.0, "Computer for gamers.", 3, Product::ProductType::ELECTRONIC);
    example.displayProduct();
}