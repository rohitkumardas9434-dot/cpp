#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the array size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array values: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //precomputation
    int hash[13]={0};//here I am asuming that maximum array size will be 12
    for (int i = 0; i < n; i++)
    {
        hash[a[i]]+=1;
    }
    int q;
    cout<<"How many numbers you wanna check: "<<endl;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    } 
    return 0;
}