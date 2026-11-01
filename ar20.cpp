#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int b[n];
    int largest=-1;
    int k=0;
    for (int i = n-1; i>=0; i--)
    {
        if (a[i]>largest)
        {
            b[k]=a[i];
            k++;
            largest=a[i];
        }
        
    }
    for (int i = 0; i < k; i++)
    {
        cout<<b[i]<<" ";
    }
    //time will be order of n and space to store will be order of n , here it's printing in reverse order but if you want you
    //can swap or sort according to the problem
    
    return 0;
}