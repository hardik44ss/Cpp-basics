// 1. System header file : comes with _EDG_COMPILER
#include<iostream>
// 2. User defined : written by progrmer
/*#include<hardik.h> error : not present in current directory
*/
using namespace std;
int main (){
    cout<<"Hardik's CLASSES\n"<<endl;
    //endl used for new line
    cout<<"Following are the operator"<<endl;
    //arithmetic
    int a=4,b=5;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;// a=5
    cout<<"The value of a-- is "<<a--<<endl;//a-- = 5
    cout<<"The value of ++a is "<<++a<<endl;//a=5
    cout<<"The value of --a is "<<--a<<endl;
    // comparision
    cout<<"value of a and b is "<<a<<" "<<b<<endl;
    cout<<"is a==b"<<" "<<(a==b)<<endl;
    cout<<"is a!=b"<<" "<<(a!=b)<<endl;
    cout<<"is a>=b"<<" "<<(a>=b)<<endl;
    cout<<"is a<=b"<<" "<<(a<=b)<<endl;
    cout<<"is a>b"<< " "<<(a>b)<<endl;
    cout<<"is a=<b"<<" "<<(a<b)<<endl;
    //logical
    cout<<"is ((a==b)&&(a!=b)) :"<<((a==b)&&(a!=b))<<endl;//and
    cout<<"is ((a==b)||(a!=b)) :"<<((a==b)||(a!=b))<<endl;//or
    
    return 0;
}  