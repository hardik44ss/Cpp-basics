#include<iostream>
using namespace std;
//struct is defined and used in main as a user-defined data type.
struct employee
{
    int eId;
    char favChar;
    int salary;
};
union money
{
    /* data */
    int rice;// enn teeno m se ak hi use kare
    char car;
    float pounds;
};

int main(){
    //To access any of the values of a structure's members, we use the dot operator (.)
    struct employee Harry;
    Harry.eId = 1;
    Harry.favChar = 'c';
    Harry.salary = 120000000;
    cout << "eID of Harry is " << Harry.eId << endl;
    cout << "favChar of Harry is " << Harry.favChar << endl;
    cout << "salary of Harry is " << Harry.salary << endl<<endl;

    struct employee Hardik;
    Hardik.eId = 44;
    Hardik.favChar = 'h';
    Hardik.salary = 120000;
    cout << "eID of Hardik is " << Hardik.eId << endl;
    cout << "favChar of Hardik is " << Hardik.favChar << endl;
    cout << "salary of Hardik is " << Hardik.salary << endl;

    union money m1;
    m1.rice = 34;
    cout <<"union m1.rice is "<< m1.rice<<endl<<endl;
//Enum = used for assigning values to our data
    enum Meal{breakfast,lunch,dinner};
    Meal m2=breakfast;
    cout<<"enum meal=breakfast at index : "<<m2<<endl;
    cout<<"is enum breakfasr at index 0 "<<(m2==0)<<endl;// 1 for true , 0 for false
    
   
    return 0;
}