#include "helpers.hpp"
#include <ctime>
#include <ctime>


int Converter::ConvertToCents(double value){
    return int(value * 100);
};

std::string Time::GetCurrentTime(){
   time_t currentTime = time(0);
   char* strCurrentTime = ctime(&currentTime);
   tm *gmtm = gmtime(&currentTime);
   strCurrentTime = asctime(gmtm);
   
   return strCurrentTime;
}
