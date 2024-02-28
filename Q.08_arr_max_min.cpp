#include<iostream>
using namespace std;

int getMax(int arr[],int size){
    int max= INT32_MIN;
    for (int i = 0; i <size ; i++) {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int getMin(int arr[],int size){
    int min= INT32_MAX;
    for (int i = 0; i <size ; i++) {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int sumarr(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main () 
{
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[100];
    // Fill the array with user input.
    for (int i=0 ;i < size ; i++){
        cin>>arr[i];
    }
    cout<<" Maximum value is : "<<getMax(arr,size)<<endl;
    cout<<" Maximum value is : "<<getMin(arr,size)<<endl;

//Using Predefined function
    int maxi,mini;
    for(int i=0;i<size;i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
     cout<<"\n Maximum value is : "<<maxi<<endl;
    cout<<" Maximum value is : "<<mini<<endl;
//Sum of array
    sumarr(arr,size);
    cout<<"\n Summation of all elements in array is: "<<sumarr(arr,size)<<endl;
    return 0;
}
