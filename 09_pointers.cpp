#include<iostream>
using namespace std;

int main(){
    //POINTERs= datatype which holds another data type
    int aa = 100;
    cout <<endl<< "Value of variable aa stored at address " << &aa << " is " << (*(&aa)) << endl<<endl;
    
    int a = 100;
    int *b = &a;
    int **c = &b;
    cout << "Value of variable a is " << a << endl;
    cout << "Address of variable a is " << b << endl;
    cout << "Address of pointer b is " << c << endl<<endl;
    //It can be used in array
    int marks[] = {99, 100, 38};
    int *p = marks;
    cout << "The value of marks[0] is " << *p << endl;//default is *(p+1)
    cout << "The value of marks[1] is " << *(p + 1) << endl;
    cout << "The value of marks[2] is " << *(p + 2) << endl;

    return 0;
}