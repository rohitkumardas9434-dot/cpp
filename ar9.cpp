#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the values: "<<endl;
    for(int i=0;i<n;i++){

        cin>>a[i];
    }
    int k=0;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==1){
            count++;
        }
        if(count>k){
            k=count;
            count=0;
        }
    
    }
    cout<<"The maximum number of consecutive 1's is: "<<k<<endl;
    
    return 0;
}