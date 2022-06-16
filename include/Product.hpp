#include "Helpers.hpp"

class Product {

public:
     enum ProductType{
        ELECTRONIC = 1,
        OFFICE = 2,
        DECORATION = 3
    };
private:
    std::string name;
    int price;
    std::string description;
    int amount;
    ProductType type;

public:
    Product(std::string name, double price, std::string description, int amount, ProductType type );
    std::string getName();
    int getPrice();
    std::string getDescription();
    int getAmount();
    std::string getId();
    ProductType getType();
    void displayProduct();
};