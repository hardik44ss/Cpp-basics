#include<iostream>
#include<math.h>
using namespace std;

class Solution {
    signed int n;
    public:
        int reverse(int num){
            int ans=0;
            while(num!=0){
                int digit = num%10;
                if(ans<(-pow(2,31))/10 || ans>(pow(2,31)-1)/10){
                    return 0;
                }
                ans = ans*10 + digit ;
                num = num/10;
            }
            return ans;
        }
};

int main () 
{
    int num;
    cout<<"ENter number :";
    cin>>num;
    Solution rev;
    int rever = rev.reverse(num);
    cout<<"Reversed integer is : "<<rever;
    return 0;
}
