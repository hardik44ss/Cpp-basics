#include<iostream> 
using namespace std;

int main()
{
    int num1 , num2;
    // Insertion operator (cout)
    cout<< "Enter the value of number : \n"; 
//taking input
    cin>>num1; //extraction operator

    cout<< "Enter the value of number : \n"; 
    cin>>num2; //extraction operator
    cout <<"The sum is "<<num1+num2 <<endl ; //To print 
//A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    float f1 = 35e3;
    double d1 = 12E4;
    cout <<"f1 : "<<f1<<endl ;
    cout <<"d1 : "<<d1<<endl ;
// To get length of the string 
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();
    return 0;

//String : when input has space in it 
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;
    // Type your full name: John Doe
    //Your name is: John Doe
}

/*  O R
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}*/ 