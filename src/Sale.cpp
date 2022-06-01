#include "Sale.hpp"
#include <stdexcept>

Sale::Sale(std::string clientEmail):
clientEmail(clientEmail)
{};

TableTemplate::Classes saleTable = TableTemplate::Classes::SALE;

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
            break;
        }
        else{
            positionProduct = -1;
        }
    };

    if(positionProduct == -1){
        throw std::invalid_argument("Product with given id not in boughtProducts array.");
    };

    products.erase(products.begin() + positionProduct);
    
    return products;
};