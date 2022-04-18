// Your First C++ Program

#include <iostream>
using namespace std;


int main() 
{
    int choice;
    cout << "Add Number" << endl;
    cin >> choice;
    

    switch (choice)
    {
    case 1:
        cout << "one" << endl;
        break;

    case 2:
        cout << "Two" << endl;
        break;

    case 3:
        cout << "three" << endl;
        break;

    case 4:
        cout << "Four" << endl;
        break;

    default:
        cout << "your number most < 5" << endl;
        break;
    }

    return 0;


}