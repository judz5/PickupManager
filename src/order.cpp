#include <iostream>
#include <string>
#include <ctime>
#include "order.h"

using namespace std;

Order::Order(const string& _name, string& _location, string& _pickupDate) :
    name(_name), location(_location), pickupDate(_pickupDate) {
   
    // setting current time to storageDate
    std::time_t currentTime = std::time(nullptr); // get curr time in seconds since epoch
    std::string currentTimeStr = std::ctime(&currentTime); // convert to string formatting
    storageDate = currentTimeStr;
}

void Order::setPickupDate(string& _pickupDate){
    pickupDate = _pickupDate;
}

void Order::setLocation(string& _location){
    location = _location;
}

string Order::getName() const{
    return name;
}

string Order::getLocation() const{
    return location;
}

string Order::getPickupDate() const{
    return pickupDate;
}

string Order::getStorageDate() const{
    return storageDate;
}

int Order::daysInStorage(){
    // this will return, storageDate - pickupDate
    // will have to format the strings into date values i can work with
    return 0;
}


