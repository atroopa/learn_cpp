// Your First C++ Program

#include <iostream>
using namespace std;


int main() 
{
    int counter = 0; 
    int range, number, sum = 0;


    while (true)
    {
        cout << "Add Your Number: " << endl;
        cin >> number;

        sum = number + sum;
        cout << sum << endl;

        if (sum == 100){
            break;
        }

    }
    

    return 0;


}