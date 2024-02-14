#include<iostream>
using namespace std;

class permutation {
    double n,r;
    public:
        void getdata(){
            cout<<"Enter value of n : ";
            cin>>n;
            cout<<"Enter value of r : ";
            cin>>r;
        }
        int fact (int num ){
            int f=1;
            for(int i=1;i<=num;i++){
                f *= i;
            }
            return f;
        }
        void nCr(void){
            int x=n;
            int y=r;
            int nCr;
            nCr = fact(x)  / (fact(y)*fact(x-y));
            cout<<"Permutation is : "<<nCr;
        }
};

int main () 
{
    permutation p;
    p.getdata();
    p.nCr();
    return 0;
}
