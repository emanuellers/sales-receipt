#pragma once
#include <string>

class TableTemplate{
public:
    enum Classes{
        PRODUCT = 1,
        CLIENT = 2,
        SALE = 3
    };
    static Classes tableName;
    std::string classToTemplateTable(Classes identifier);
};