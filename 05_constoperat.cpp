#include<iostream>
#include<iomanip>//for use of 
                 //setw(4) giving spaces
using namespace std;
int main () {
    // const int a=44;
    // cout<<"The value of a is :"<<a<< endl;
    //a=45;
    //This is invalid
    int a=4,b=5,c=6;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;

    cout<<"a = "<<setw(6)<<a<<endl;
    cout<<"b = "<<setw(6)<<b<<endl;
    cout<<"c = "<<setw(6)<<c<<endl;

}