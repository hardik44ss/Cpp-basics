#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter a decimal number : ";
    cin >> n;

    int ans = 0;
    int i = 0;
    int num=1;
    int bit;
    while (n != 0)
    {
        bit = n & 1; // getting the rightmost set bit of n
        ans += (bit * num) ;
        n = n>>1;// Right shift by one position
        num*=10;
        i++;
    }
    cout << "Binary number is : " << ans<<endl;
    // int n=4;  D O U B T
    // int ans=0;
    // int i=0;
    // int bit;
    // while(n!=0){
    //     bit = n & 1;
    //     ans += (bit * pow(10,i));
    //     n=n>>1;
    //     i++;
    // }
    
    // cout<<pow(10,0);
    return 0;
}
