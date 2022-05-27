#include <sqlite3.h>
#include <string>

class Database{
public:
    sqlite3* ConnectToDataBase(char* dbName);
    int CloseDatabaseConnection(sqlite3* db);
    int CreateTable(sqlite3* openDb,  std::string ddl);
    int InsertElement();
};