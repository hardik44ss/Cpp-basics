#include<iostream>
using namespace std;
// function overloading 
//compiler automatic detech the input value of the function
int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}

float volume(int r){
    return (3.14*r*r*r*4/3);// volune of sphere
}
float volume(int r, int h){//volume of cylinder
    return (3.14*r*r*h);
}
int  volume(int l,int h,int b){// volume of cuboid
    return l*h*b;
}

int main(){
    int a=3,b=4,c=5;
    cout<<"The sum of a and b : "<<sum(a,b)<<endl;
    cout<<"The sum of a, b and c is :"<<sum (a,b,c)<< endl;
    int r=4,h=5,l=4,breadth=8;
    cout<<"The volume of sphere is :"<<volume(r)<<endl;
    cout<<"The volume of cylinder  is :"<<volume(r,h)<<endl;
    cout<<"The volume of cuboid is :"<<volume(l,breadth,h)<<endl;
    return 0;
}