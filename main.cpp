#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Restaurant
{
    string address;
    string cuisine;
    string ownername;
    int yearopened;
    int employeecount;

};

Restaurant populateRestaurant();
void outputRestaurant(const Restaurant &);

int main()
{
    vector<Restaurant> storeRestaurants;

    for(int i = 0; i < 4; i++)
    {
        cout << "Enter Restaurant #" << i+1 << "'s information" << endl;
        storeRestaurants.push_back(populateRestaurant());

    }
    
    cout << "\nOutputting Restaurant Information:\n";
    for(int i = 0; i < 4; i++)
    {
        outputRestaurant(storeRestaurants[i]);
    }
    

    return 0;
}

Restaurant populateRestaurant() 
{    
    Restaurant temp;
    cout << "Enter the address: ";
    getline(cin, temp.address);
    cout << "What type of cuisine?: ";
    getline(cin, temp.cuisine);
    cout << "What is the owner's name?: ";
    getline(cin, temp.ownername);
    cout << "What year did they open?: ";
    cin >> temp.yearopened;
    cin.ignore();
    cout << "How many employees?: ";
    cin >> temp.employeecount;
    cin.ignore();
    return temp;
    }
void outputRestaurant(const Restaurant &r)
{
    cout << "\t> Address: " << r.address << endl;
    cout << "\t> Cuisine: " << r.cuisine << endl;
    cout << "\t> Owner: " << r.ownername << endl;
    cout << "\t> Year Opened: " << r.yearopened << endl;
    cout << "\t> Number of Employees: " << r.employeecount << endl << endl;

}