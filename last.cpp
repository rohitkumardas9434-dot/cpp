#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the matrix: "<<endl;
    cin>>n;
    int a[n][n];
    cout<<"Enter the matrix: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; i++)
        {
            /* code */cin>>a[i][j];
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; i++)
        {
            swap(a[i][j],a[j][i]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n/2; j++)
        {
            a[i][j]=a[i][n-1-j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
    
    
    return 0;
}