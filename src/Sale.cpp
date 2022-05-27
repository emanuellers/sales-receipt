#include "include/Sale.hpp"

Sale::Sale(std::string clientEmail,   std::vector<boughtProduct> products):
clientEmail(clientEmail),
products(products)
{};

TableTemplate::Classes tableName = TableTemplate::Classes::SALE;

std::string Sale::getClientEmail(){
    return clientEmail;
};

std::vector<Sale::boughtProduct> Sale::getBoughtProducts(){
    return products;
};

std::vector<Sale::boughtProduct> Sale::addProductsToSale(std::string productId, int amount){
    this->products.push_back({productId, amount});

    return products;
};

std::vector<Sale::boughtProduct> Sale::removeProductsFromSale(std::string productId){
    int positionProduct;
    for (int i = 0; i < products.size(); i++)
    {
        if(products[i].productId == productId){
            positionProduct =  i;
        }
    };

    //products.erase(positionProduct);
    
    return products;
};