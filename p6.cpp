#include<iostream>
using namespace std;

int main()
{
    char a[100],k;
    cout<<"Enter something: "<<endl;
    cin.getline(a,100);
    cout<<"Enter what you want to find: "<<endl;
    cin>>k;
    int n=0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        n++;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
            
        }
        
    }
    int left=0;
    int right = n-1;
    int flag = 0;
    while (left<=right)
    {
        int mid=(left+right)/2;
        if (a[mid]==k)
        {
            /* code */flag=1;
            break;
        }
        else if (a[mid]<k)
        {
            /* code */left=mid+1;
        }
        else{
            right=mid-1;
        }
        
        
        
        
    }
    if (flag==1)
        {
            /* code */cout<<"Character found"<<endl;
        }
    else{
            cout<<"Not found.";
        }
    
    
    
    return 0;
}