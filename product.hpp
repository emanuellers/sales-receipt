#include <string>
#include "./enums/product_enum.hpp"
class Product{
    static int ids;
private:
    std::string name;
    int price;
    std::string description;
    int amount;
    int id;
    ProductEnums::ProductType type;

public:
    Product(std::string name, double price, std::string description, int amount, ProductEnums::ProductType type );
    void displayProduct();
    std::string getName();
    int getPrice();
    std::string getDescription();
    int getAmount();
    int getId();
    ProductEnums::ProductType getType();
};