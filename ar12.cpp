#include<iostream>
using namespace std;

int main()
{
    int n;
    int target;

    cout<<"Enter the size: "<<endl;
    cin>>n;
    cout<<"Enter the target: "<<endl;
    cin>>target;
    int a[n];
    cout<<"Now enter the values: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int len=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
                if (sum==target)
                {
                    len=max(len,j-i+1);
                }
                
            
            
        }
    }
    cout<<"The length of the longest subarray with sum equal to target is: "<<len<<endl;
    
    return 0;
}