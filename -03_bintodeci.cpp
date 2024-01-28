#include<iostream>
#include<math.h>
using namespace std;

int main () 
{
    int n;
    cout << "Enter the binary number : ";
    cin>>n;
    // Converting Binary to Decimal
    int i=0;
    int ans=0;
    while(n!=0){
        int r = n % 10;
        if(r==1){
            ans = ans + pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<"Decimal number is : "<<ans;
    return 0;

}
