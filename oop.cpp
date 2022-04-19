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


class persion{

private:
    string name;
    string nationality;
    int    nationalCode;

public:

    void printInfo(){
        cout << "name: "<< name << endl << "nationality :" << nationality << endl << "nationalCode : " << nationalCode << endl;
    }

    void setName(string name){
        this->name = name;
    }

    void setNationality(string nationality){
        this->nationality = nationality;
    }

    void setNationalCode(int nationalCode){
        this->nationalCode = nationalCode;
    }

    string getName(){
        return name;
    }

    int getNationalCode(){
        return this-> nationalCode;
    }

};



// definition
void Student::avg(){
    cout << "AVG -->\t" << (score + 18) /2 << endl;
}





int main(){

    // objects
    persion p1;
    
    p1.setName("Jalal");
    p1.setNationality("Afghan");
    p1.setNationalCode(178956);
    cout << p1.getName() << endl << p1.getNationalCode() << endl;
    
    
    return 0;
}