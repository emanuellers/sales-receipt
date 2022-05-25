#include "Helpers.hpp"
#include <ctime>
#include <ctime>



int Converter::ConvertValueToCents(double value){
    return int(value * 100.0);
};

std::string Time::GetCurrentTime(){
   time_t currentTime = time(0);
   char* strCurrentTime = ctime(&currentTime);
   tm *gmtm = gmtime(&currentTime);
   strCurrentTime = asctime(gmtm);
   
   return strCurrentTime;
}
