#include "include/Sale.hpp"

Sale::Sale(std::string clientEmail,   std::vector<boughtProduct> products):
clientEmail(clientEmail),
products(products)
{};