// Your First C++ Program

#include <iostream>
using namespace std;


int main() 
{

    string name, food;
    int    age ; 
    double money;

    // Inputing

    cout << "Add a Name: " << endl;
    cin >> name;
    cout << "Add a Age: " << endl;
    cin >> age; 
    cout << "Add a Food" << endl;
    cin >> food;
    cout << "Add Money: " << endl;
    cin >> money;


    cout << name << " is " << age <<" yearls Old! "<< endl;
    cout <<" He Likes "<< food << " a lot"<< endl;
    cout << "he has " << money << " in his Card!"<< endl;     


    return 0;


}