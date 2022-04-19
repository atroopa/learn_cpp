#include <iostream>
using namespace std;

int  main(){

    int n,m;

    cout << "Enter Length of Row and Column: " << endl;
    cin >> n >> m;
    cout << "-------------------------------" << endl;


    int number1[n][m]; // Initialized Arrays 1 Size
    int number2[n][m]; // Initialized Arrays 2 Size


    // Matrix Number 1 -----------------------------------
    cout << "---- Matrix Number 1 ----" << endl;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cout << "i -" << i+1 << " j : " << j+1 << endl;
            cin >> number1[i][j];

        }
    }

    cout << "---- Matrix number 2: ----" << endl;

    // Matrix Number 2 -----------------------------------
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cout << "i -" << i+1 << " j : " << j+1 << endl;
            cin >> number2[i][j];

        }
    }

    // Matrix Number 1 + Matrix Number 2 -----------------------------------
    cout << "---- Matrix 3 ----"<< endl;

    int numbers3[n][m];
    
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            numbers3 [i][j] = number1[i][j] + number2[i][j];
            cout << numbers3[i][j] << "\t";
        }
    }
    cout << "\n Finish!"<<endl;


}