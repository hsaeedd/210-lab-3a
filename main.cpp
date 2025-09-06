#include <iostream>
#include <fstream>
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
    Restaurant myRestaurant = populateRestaurant();
    cout << "\nOutputting Restaurant Information:\n";
    outputRestaurant(myRestaurant);

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
    cout << "\t> Number of Employees: " << r.employeecount << endl;

}