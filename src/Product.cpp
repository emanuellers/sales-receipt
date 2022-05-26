#include "Product.hpp"
#include "Helpers.hpp"
#include <iostream>

Product::Product(std::string name, double price, std::string description, int amount, Product::ProductType type ):
name(name),
price(Converter::ConvertValueToCents(price)),
description(description),
amount(amount),
type(type)
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

Product::ProductType Product::getType(){
    return type;
};

void Product::displayProduct(){
    std::cout << "|------------------------------------|" << std::endl;
    std::cout << "Name: " << this->getName() << " " <<std::endl;
    std::cout << "Price: " << this->getPrice() << " " <<std::endl;
    std::cout << "Description: " << this->getDescription() << " " <<std::endl;
    std::cout << "Type: " << this->getType() << " " <<std::endl;
    std::cout << "Amount: " << this->getAmount() << " " <<std::endl;
    std::cout << "|------------------------------------|" << std::endl;
};

