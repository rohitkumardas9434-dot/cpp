#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    //Bubble sort
    for (int i = n-1; i >=1; i--)
    {
        for (int j = 0; j<i; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
            
        }
        
    }
    cout<<"The sorted array is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}