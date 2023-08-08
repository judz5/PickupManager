#include <iostream>
#include <string>
#include <ctime>
#include "order.h"

using namespace std;

class Order{

    private:
        string name;
        string location;
        string pickupDate;
        string storageDate;

    public:
        Order(const string& _name, string& _location, string& _pickupDate){
            name = _name;
            location = _location;
            pickupDate = _pickupDate;
            
            // setting current time to storageDate
            std::time_t currentTime = std::time(nullptr); // get curr time in seconds since epoch
            std::string currentTimeStr = std::ctime(&currentTime); // convert to string formatting
            pickupDate = currentTimeStr;
        }

        void setPickupDate(string& _pickupDate){
            pickupDate = _pickupDate;
        }

        void setLocation(string& _location){
            location = _location;
        }

        string getName() const{
            return name;
        }

        string getLocation() const{
            return location;
        }

        string getPickupDate() const{
            return pickupDate;
        }


        int daysInStorage(){
            // this will return, storageDate - pickupDate
            // will have to format the strings into date values i can work with
        }


};