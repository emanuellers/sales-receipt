#include <sqlite3.h>
#include <string>

class Database{
public:
    sqlite3* ConnectToDataBase(char* dbName);
    int CloseDatabaseConnection(sqlite3* db);
    int CreateTable(std::string tableName);
    int InsertElement();
};