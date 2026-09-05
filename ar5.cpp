#include<iostream>
using namespace std;
void reverse(int a[], int start, int end)
{
    while(start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

int main()
{
    int n, d;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values of the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"How many places you want to rotate the array: "<<endl;
    cin>>d;
    d=d%n;
    reverse(a, 0, d-1);
    reverse(a, d, n-1);
    reverse(a, 0, n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}