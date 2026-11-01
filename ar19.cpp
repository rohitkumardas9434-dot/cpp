#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool leader=true;
        for (int j = i+1; j < n; j++)
        {
            if (a[j]>a[i])
            {
                leader=false;
                break;
            }
            
        }
         if (leader==true)
            {
                cout<<a[i]<<" ";
            }
    }
   //T(C) will be O(N^2) is this approach
    
    return 0;
}