#include "TableTemplate.hpp"
#include <vector>

class Sale{
public:
     struct boughtProduct{
        std::string productId;
        int amount ;
    };
private: 
    std::string clientEmail;
    std::vector<boughtProduct> products;
    int totalPrice;

private:
    int calculateTotalPrice(std::vector<boughtProduct> products);
public:
    Sale(std::string clientEmail,   std::vector<boughtProduct> products);
    int getTotalPrice(std::vector<boughtProduct> products); 
    std::string getClientEmail();
    std::vector<boughtProduct> getBoughtProducts();
    std::vector<boughtProduct> addProductsToSale(std::string productId, int amount);
    std::vector<boughtProduct> removeProductsFromSale(std::string productId);
};