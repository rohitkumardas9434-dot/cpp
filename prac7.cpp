//Rotating a matrix
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the square matrix: "<<endl;
    cin>>n;
    int a[n][n],b[n][n],c[n][n];
    cout<<"Enter the values of the matrix: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j]=a[j][i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j]=b[i][n-1-j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
        
    }

    
    
    return 0;
}