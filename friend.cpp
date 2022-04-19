#include <iostream>

using namespace std;


class A{
    private:
        int money;

    public:

        A(int money){
            this->money = money; 
        }

        friend void show_money(A a){
            cout << a.money << endl;
        }
};



int main(){

    A a(10);
    show_money(a);

    return 0;
}