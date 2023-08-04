// this is where i will define variables and functions
// for the order class (order.cpp)

/*

Each order will have the following tied to it  

Name ("John Smith"), Location ("B1") *maybe not a str?* , Date pickup ("8-25-23"), 
Date placed in pickup ("7-21-23"), 

Can also have functions for Days since set for pickup, everything should be using the current system time
for things like date.


*/

#include <string>


class Order {

    public:
        Order(const std::string name,std::string location, std::string pickupDate, const std::string storageDate);

        std::string getLocation() const; // this may have to become a
        std::string getName() const;
        std::string getStorageDate() const;
        std::string getPickupDate() const;

        void setLocation();
        void setName();
        void setPickupDate();

        // std::int getDaysSince 

    private:
        std::string name;
        std::string location;
        std::string pickupDate;
        std::string storageDate;


};

