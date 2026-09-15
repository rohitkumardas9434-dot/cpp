#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the sizes of the two arrays: "<<endl;
    cin>>n>>m;
    int a[n],b[m];
    cout<<"Enter the first array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the second array: "<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int c[m+n];
    int k=0;
    int i=0;
    int j=0;
    while (i<n || j<m)
    {
        if (a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else if (b[j]<a[i])
        {
            c[k]=b[j];
            k++;
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
            i++;
            j++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout<<c[i]<<" ";
    }
    
    
    return 0;
}