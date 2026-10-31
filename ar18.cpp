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
    int el;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (count==0)
        {
            count=1;
            el=a[i];
        }
        else if (el==a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        
    }
    int count1=0;
    for (int i = 0; i < n; i++)
    {
       if (a[i]==el)
       {
            count1++;
       }
       
    }
    if (count1>n/2)
    {
        cout<<el<<" is the majority element."<<endl;
    }
    else
    {
        cout<<"There is no such element."<<endl;
    }
    
    return 0;
}