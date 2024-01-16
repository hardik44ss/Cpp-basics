#include<iostream>
using namespace std;

int c=44 ; //global c
int main (){
    int a,b,c;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    c=a+b; // local c
    cout<<"the sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;//****for global variable****
    float d=34.4F;//to specify 34.4 is float size 4
    long double e=34.4L;//to specify long double size is 12
    
    cout<<"size "<<sizeof(34.4)<<endl; // double
    cout<<"size "<<sizeof(34.4f)<<endl;
    cout<<"size "<<sizeof(34.4F)<<endl;
    cout<<"size "<<sizeof(34.4l)<<endl;
    cout<<"size "<<sizeof(34.4L)<<endl;
    cout<<endl<<"size d and e is "<<sizeof(d)<<" "<<sizeof(e)<<endl;

// Reference variable (ak chij ke alg alg naam)
    float x=44;
    float &y=x;
    //y is referecnce variable
    //original variable is x
    cout<<x<<endl;
    cout<<y<<endl;
//******Typecasting ******** MST
    int aa = 44;
    float bb = 45.5;
    cout<<"the floating value of num is :"<<(float)aa<<endl;
    cout<<"the floating value of num is :"<<float(aa)<<endl;

    cout<<"the integer value of num is :"<<(int)bb<<endl;
    cout<<"the integer value of num is :"<<int(bb)<<endl;
    
    cout<<"The sum of a and b is : "<<aa+bb<<endl;
    cout<<"The sum of a and b is : "<<aa+int(bb)<<endl;
    cout<<"The sum of a and b is : "<<(float)aa+bb<<endl;


}