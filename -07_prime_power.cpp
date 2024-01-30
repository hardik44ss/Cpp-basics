#include<iostream>
using namespace std;

class isPrime{
    int n;
    public:
        void getdata(void){
            cout<<"ENter number n : ";
            cin>>n;
        }
        void checkprime(void){
        int x=n;
        for (int i=2;i<x;i++){
            if(x%i==0){
                cout<<"Number is not prime"<<endl;
                return;
            }
            else{
                cout<<"The number is prime"<<endl;
                return;
            }
        }
    }
};

class power{
    int a,b;
    public:
        void get_power_data(void) {
            cout << "\nEnter base and exponent respectively : ";
            cin >> a >> b;
        }
        void pow(){
            
            int base=1;
            for(int i=1;i<=b;i++){
                base = base * a;
            }
            cout << "\nPower of the number is : " << base ;
        }
};

int main () 
{
    isPrime obj;
    obj.getdata();
    obj.checkprime();

    power n;
    n.get_power_data();
    n.pow();
    return 0;
}
