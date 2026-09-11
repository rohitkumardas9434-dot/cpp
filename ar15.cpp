#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the matrix: "<<endl;
    cin>>n;
    int a[n][n];
    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           swap(a[i][j],a[j][i]);
        }
        
    }
    for(int i = 0; i < n; i++)
{
    int j = 0;
    int k = n - 1;

    while(j < k)
    {
        swap(a[i][j], a[i][k]);
        j++;
        k--;
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