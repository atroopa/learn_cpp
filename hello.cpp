// Your First C++ Program

#include <iostream>
using namespace std;


int main() 
{

    /*
    tryning Project!
    defined constexper
    pointer PrintLN
    */

    int n;
    cout << "Size Of Array: " << endl;
    cin >> n;

    int numbers[n];
    int sum;



    cout << "Enter the Index For Array " << endl;
    for (int i=0 ; i<n ; i++){
        cin >> numbers[i];

        sum = numbers[i] + sum;

    }



    cout << "Sum is : " << sum << endl;




    return 0;

}