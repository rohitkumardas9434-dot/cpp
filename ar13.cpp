#include<iostream>
using namespace std;

int main()
{
    int n,t;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values of the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the target: "<<endl;
    cin>>t;
    int left=0,right=0,maxlen=0;
    int sum=a[0];

    while(right<n){
        while(sum>t && left<=right){
            sum-=a[left];
            left++;
        }
        if(sum==t){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=a[right];
        }
    }

    cout<<"The length of the longest subarray with sum equal to target is: "<<maxlen<<endl;
    return 0;
}