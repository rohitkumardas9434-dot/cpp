#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        //spaces
        for (int k = 1; k <=n-i; k++)
        {
            cout<<" ";
        }
        
        long long ans=1;
        cout<<ans<<" ";
        for (int j = 1; j < i; j++)
        {
            ans=ans*(i-j);
            ans=ans/j;
            cout<<ans<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}