#include <iostream>
using namespace std;

void print_info(string name, int age);

//---------------------------------------------------

int main()
{

    print_info("Omid Hajavi", 29);

    return 0;
}




void print_info(string name, int age)
{

    cout << "\n My Name is " << name << " and My Age is " << age << endl;

}