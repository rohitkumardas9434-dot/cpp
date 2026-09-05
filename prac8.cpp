#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"now enter the values of the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k=0;
    for (int i = 0; i < n; i++)
    {
        /* code */if (a[i]!=0)
        {
            /* code */a[k]=a[i];
            k++;
        }
        
        
        
        
    }
    while (k<n)
    {
        /* code */a[k]=0;
        k++;
    }
    
    
    for (int i = 0; i < n; i++)
    {
        /* code */cout<<a[i]<<" ";
    }
    
    
    
    return 0;
}