#include<iostream>
using namespace std;
//Fibnachi numbers (fib1=1 & fib0=1) & fib2=2
int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
// fib 4
// fib3 + fib2 
// fib1 + fib 2 + fib0 + fib1
// 1+  (1+1)+ 1 + 1
int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}
/*factorial(4) = 4*factorial(3)
  factorial(4) = 4*3*factorial(2)
  factorial(4) = 4*3*2*factorial(1)
  factorial(4) = 4*3*2*1=24
*/

int main(){
    // factorial of a number
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"THe factorial of number is : "<<factorial(a)<<endl;
    cout<<"Fibnachi number at "<<a<<"th position is "<<fib(a);
return 0;
}