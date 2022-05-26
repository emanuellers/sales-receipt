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

public:
    Sale(std::string clientEmail,   std::vector<boughtProduct> products);
    int getTotalPrice(std::vector<boughtProduct> products); 

   
};