#include<iostream>
using namespace std;

int main()
{
    int n,d;
    cout<<"enter the size : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values of the array: "<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter how many places you want to rotate the array: "<<endl;
    cin>>d;
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=a[i];
    }
    for(int i=d;i<n;i++)
    {
        a[i-d]=a[i];
    }
    for(int i=n-d;i<n;i++)
    {
        a[i]=temp[i-n+d];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    
    return 0;
}