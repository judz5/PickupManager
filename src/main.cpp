#include<iostream>
#include<fstream>
#include "order.h"
#include<string>
using namespace std;


void makeFile(const Order& _order){
    ofstream file("data/orders/" + _order.getName() + ".csv");
    file << _order.getName() << endl;
    file << _order.getLocation() << endl;
    file << _order.getStorageDate() << endl;
    file << _order.getPickupDate() << endl;
    file.close();
}


// Main interface and function running from here

int main()
{

    string name; string location; string pickupDate;

    cout << "Enter order name: ";
    getline(cin, name);
    cout << "Enter order location: ";
    cin >> location;
    cout << "Enter pickup Date (MM/DD/YYYY): ";
    cin >> pickupDate;

    Order order(name, location, pickupDate);

    cout << "\nNew Order Made ----------- " << order.getStorageDate() << endl;

    cout << "Name: " << order.getName() << endl;
    cout << "Location: " << order.getLocation() << endl;
    cout << "Pickup Date: " << order.getPickupDate() << endl; 

    cout << "\nCreating order file" << endl;
    makeFile(order);
    cout << "File Created";
}