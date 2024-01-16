#include<iostream>
using namespace std;

int main(){
    /*Loops in C++
    There are three type
for,while,dowhile
    */
//FOR loop
    for(int x=0;x<=12;x++){
        cout<<x<<endl;
    }
//WHILE loop
    //syntex of while loop
    int i=1;
    while (i<=12/*condition*/)
    {
        cout<<i<<endl;
        i++; 
        /* code */
    }   
//DO WHILe
    int j=1;
    do
    {
        cout<<j<<endl;
        j++;
        /* code */
    } while (/* condition */j<1);
    // first program run then check condition
// write a multilication table with do while
    int t=6;
    int k=1;
    do
    {
        cout<<t*k<<endl;
        k++;
    } while (k<=10);  

    
    
    return 0;
}
