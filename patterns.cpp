#include<iostream>
using namespace std;

int reverse(arr a[],int n)
{
    int l=0;
    int r=n-1;
    if (l<=r)
    {
        return;
    }
    else
    {
        swap(a[l],a[r]);
        l++;
        r--;
        reverse()
    }
    

}
    
}
int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter the values of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<reverse(a,n);
    
    
    return 0;
}