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

    int arr[3][5] = {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5}
    };

    int row = sizeof(arr) / sizeof(arr[0]); // The Size Of 2d Array
    int col = sizeof(arr[0]) / sizeof(arr[0][1]); // The Size of second D of Array


    for (int i=0 ; i<row ; i++){
        for (int j = 0; j < col; j++)
        {
            cout << "   " << arr[i][j];
        }

    } 


    return 0;

}