#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the vlaues of the array: "<<endl;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int k=0;
    for (int i= 0;i<n;i++)
    {
        k=k^a[i];
    }
    cout<<"The unique number is: "<<k<<endl;
    
    return 0;
}