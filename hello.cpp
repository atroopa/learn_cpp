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

    bool flag = true; // When -1 Converted to False
    int  number;      // user Put it 
    int  sum  = 0;    // Catching


    // While Loop ---------------------------------
    while (flag == true){
        cout << "Enter Your Number : " << endl;
        cin >> number;

        if (number == -1){

            flag == false;
            break;

        }else{

            sum = number + sum;

        }

    }

    // Show Result -------------------------------

    cout << "Sum is " << sum << endl;


    return 0;


}