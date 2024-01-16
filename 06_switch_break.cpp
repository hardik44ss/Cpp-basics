#include <iostream>
using namespace std;

int main (){
    cout<<"This is control if else tutorial "<<endl;
    int age;
    cout<<"Enter you age : ";
    cin>>age;
    // if(age<18){
    //     cout<<"You nigga , what are u doin here";

    // }else{
    //     cout<<"hey buddy , have a glass of whiskey";
    // }
//SELECTION CONTROL : switch case statement
    switch (age) // age*3*5/7 also be used

    {
    case 18:
        cout<<"You are 18";
        break;// if this not present all the case will run
            //without seeing the condition 
            // mean all the cout will execute
    case 2:
        cout<<"YOu are too lil nigga";
        break;
    case 22:
        cout<<"YOu are too big nigga";
        break;
    default:
        cout<<"no special case found ";
        break;
    }
    return 0;
}