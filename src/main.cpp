#include<iostream>
#include "order.h"
#include<string>
using namespace std;


// Main interface and function running from here

int main()
{

    string name; string location; string pickupDate;

    cout << "Enter order name: ";
    getline(cin, name);
    cout << "Enter order location: ";
    cin >> location;
    cout << "Enter pickup Date (M-D-YY): ";
    cin >> pickupDate;

    Order order(name, location, pickupDate);

    cout << "\nNew Order Made ----------- " << order.getStorageDate() << endl;

    cout << "Name: " << order.getName() << endl;
    cout << "Location: " << order.getLocation() << endl;
    cout << "Pickup Date: " << order.getPickupDate() << endl; 

}