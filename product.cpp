#include "product.hpp"
#include "helpers.hpp"
#include <iostream>

Product::Product(std::string name, double price, std::string description, int amount, ProductEnums::ProductType type ):
name(name),
price(Converter::ConvertToCents(price)),
description(description),
amount(amount),
type(type),
id(ids++)
{
};

std::string Product::getName(){
    return name;
};
int Product::getPrice(){
    return price;
};
std::string Product::getDescription(){
    return description;
};
int Product::getAmount(){
    return amount;
};
int Product::getId(){
    return id;
};

ProductEnums::ProductType Product::getType(){
    return type;
};


void Product::displayProduct(){
    std::cout << "|------------------------------------|" << std::endl;
    std::cout << "Name: " << Product::getName() << " " <<std::endl;
    std::cout << "Price: " << Product::getPrice() << " " <<std::endl;
    std::cout << "Description: " << Product::getDescription() << " " <<std::endl;
    std::cout << "Type: " << Product::getType() << " " <<std::endl;
    std::cout << "Amount: " << Product::getAmount() << " " <<std::endl;
    std::cout << "|------------------------------------|" << std::endl;
};

