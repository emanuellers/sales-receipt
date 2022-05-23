#include "./enums/product_enum.hpp"
#include "product.hpp"

int main(){
    Product example("Desktop computer", 130000, "Computer for gamers.", 3, ProductEnums::ProductType::ELECTRONIC);
    example.displayProduct();
}