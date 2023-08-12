#include<iostream>
#include<fstream>
#include "order.h"
#include<string>
using namespace std;


void makeFile(const Order& _order){
    ofstream file("data/" + _order.getName() + ".csv");
    file << _order.getName() << endl;
    file << _order.getLocation() << endl;
    file << _order.getStorageDate() << endl;
    file << _order.getPickupDate() << endl;
    file.close();
}

int menu(){
    cout << "Welcome to PickupManager" << endl;
    cout << "---------------------------------------\n\n";
    cout << "1. Add New Pickup\n";
    cout << "2. Search Pickups\n";
    cout << "3. Edit Pickup\n";
    cout << "4. Exit\n";

    int select;
    cout << "\nEnter Selection: ";
    cin >> select;
    return select;
}

void newOrder(){
    string name; string location; string pickupDate;

    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    cout << "\nEnter order name: ";
    getline(cin, name);
    cout << "Enter order location: ";
    cin >> location;
    cout << "Enter pickup Date (MM/DD/YYYY): ";
    cin >> pickupDate;

    Order order(name, location, pickupDate);

    cout << "\nNew Order Made -----@----- " << order.getStorageDate() << endl;
    makeFile(order);
    cout << "Order File Created.";
}

// Main interface and function running from here

int main()
{
    /*

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

    */

    int selection = menu();
    if(selection == 1){
        newOrder(); 
    }else if(selection == 2){
        // search
    }else if(selection == 3){
        // edit
    }else if(selection == 4){
        exit(0);
    }else{
        cout << "Invalid Input";
    }


}