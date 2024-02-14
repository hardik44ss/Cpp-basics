#include<iostream>
using namespace std;

class calculator {
    public:
        void calc(int a, int b , char ch){
        switch (ch)
        {
        case '+' : cout<<"Addintion : "<<a+b<<endl;
            break;
        case '-' : cout<<"Subtraction : "<<a-b<<endl;
            break;
        case '*' : cout<<"Multiplication : "<<a*b<<endl;
            break;
        case '/' : cout<<"Division : "<<a/b<<endl;
            break;
        
        default: cout<<"Not valid"<<endl;
            break;
        }
    }
};
class EvenOdd{
    public:
        bool evod (int a){
            if(a&1){// if a&1 == 1 if condition true
                return 0;
            }
            else{
                return 1;
            }
        }
};

int main () 
{
    int x,y;
    char op;
        cout<<"Enter the operator : ";
        cin>>op;
        cout<<"Enter value of x :";
        cin>>x;
        cout<<"Enter value of y :";
        cin>>y;
    calculator cal;
    cal.calc(x,y,op);
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    EvenOdd eo;
    if(eo.evod(a)){// if a&1 == 1 if condition true
        cout<<"The number is even."<<endl;
    }else {
        cout<<"The number is odd."<<endl;
    }
    return 0;
}
