#include<iostream>
using namespace std;
// Function = do once use multiple times
//Function prototyping
int sum(int a, int b){//it cant written after main
//int sum (int, int ) --> acceptable
//int sum(int a,b) --> not acceptable
    int c=a+b;
    return c;
}
void g(void){// void means not take any value from main function
    cout<<"hello bro"<<endl;
}

int main(){ //main is also a function
    int num1 ,num2;
    cout<<"enter first number :";
    cin>>num1;
    cout<<"enter second number :";
    cin>>num2;
//num1 and num2 are actual parameter
    cout<<"THe sum is "<<sum(num1,num2)<<endl;//returned value come here
    //sum function used before main function
    // a and b is formal parameter taking value from actual parameter

    g();
    
    return 0;//Operating system understand that program successfully done because it reach at last

}