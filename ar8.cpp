#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the sizes of the two arrays: "<<endl;
    cin>>n>>m;
    int a[n],b[m];
    cout<<"Enter the values of the first array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the values of the second array: "<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int c[n+m];
    int i=0;
    int j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
        }
        else if(b[j]<a[i]){
            c[k]=b[j];
            j++;
        }
        else{
            c[k]=a[i];
            i++;
            j++;
            k++;
        }
        
    }
    cout<<"The intersection of the two arrays is: ";
    for (int i = 0; i < k; i++)
    {
        cout<<c[i]<<" ";
    }
    
    
    return 0;
}