
// Imports And Includes
#include <iostream>
using namespace std;


/////////////////////////////////////////////////////////////////////
// Functions and Variables Info ------------------------------------/
/////////////////////////////////////////////////////////////////////

int sdd = 10;

void print_info(string name, int age);
int  power(int number);

////////////////////////////////////////////////////////////
// Main ---------------------------------------------------/
////////////////////////////////////////////////////////////

int main()
{

    print_info("Omid Hajavi", 29);
    cout << power(7) << endl;

    return 0;
}


//////////////////////////////////////////////////////////////
// Functions Source Codes -----------------------------------/
//////////////////////////////////////////////////////////////

void print_info(string name, int age)
{
    cout << "\n My Name is " << name << " and My Age is " << age << endl;
}


int power(int number)
{
    return (number * number + sdd);
}