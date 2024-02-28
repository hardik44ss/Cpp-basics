#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> res;   // resultant array of pairs
    sort(arr.begin(), arr.end());  // sorting the input array in
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            
            if(arr[i]+arr[j]==s){
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                res.push_back(temp);
            }
        }
    }
    return res;
}


int main () 
{
    
    vector<int> arr1 = {1,2,3,4,6,7,9};
    int sum1 = 7;
    vector<vector<int>> res1 = pairSum(arr1,sum1);
    cout<<"The pairs are : \n";
    for (auto x:res1) {
        for (auto y:x)  
            cout << y << " ";
        cout << "\n";
    }
	return 0;
}
