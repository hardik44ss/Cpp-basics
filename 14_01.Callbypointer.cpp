#include <iostream>
using namespace std;
//call by refernce
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// For call by reference  using cpp ref variable
void swapreference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
 
int main()
{
    int x = 5, y = 6;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapPointer(&x, &y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapreference(x,y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
}
