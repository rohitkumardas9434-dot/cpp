#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values of the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[j]=a[i];
            j++;
        }
    }
    for(int i=j;i<n;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}