#include <iostream>
using namespace std;



class Student
{
public:
    // attribute
    string name;
    string school;
    int score;
    int id;

    void print_info(){
        cout << name << endl << school << endl << score << endl << id << endl;
    }

    void avg(); // declaration

};



// definition
void Student::avg(){
    cout << "AVG -->\t" << (score + 18) /2 << endl;
}





int main(){

        // objects
        Student ali;
        ali.name   = "Ali";
        ali.school = "Samari";
        ali.score  = 12;
        ali.id     = 124578;

        ali.print_info();
        ali.avg();

        return 0;
}