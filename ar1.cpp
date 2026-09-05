#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values of the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int largest=a[0];
    for(int i=0;i<n;i++)
    {
       if(a[i]>largest)
       {
           largest=a[i];
       }
    }
    cout<<"The largest element in the array is: "<<largest<<endl;
    
    return 0;
}