#include <iostream>
using namespace std;


class Test{

    private:
        int x;

    public:

        // Constructor
    Test(int x) {
        this->x = x ;
    }

    ~Test(){
        cout << "Finish!" << endl;
    }

};




int main(){
 
    Test myobj(12); 
   


    return 0;
}


