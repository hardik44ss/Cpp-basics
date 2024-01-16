#include<iostream>
using namespace std;

int main(){

    int marks[] = {23, 45, 56, 89};
    //index-->>    0 , 1 , 2 , 3

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
//we can also print this by for loop
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks["<<i<<"] is "<<marks[i]<<endl;
    }
//Example program storing starting address of an array in pointer
    int* p = marks;
    cout<<endl<<"The value of marks[0] is "<<*p<<endl;
   //pointer was pointing aat the starting value of array
  
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;//++p
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
     
    return 0;
}