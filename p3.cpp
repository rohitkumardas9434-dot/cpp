//reversing words

#include<iostream>
using namespace std;

int main()
{
    char a[100];
    cin.getline(a,100);
    int n=0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        /* code */n++;
    }
    
    for (int i = 0; i<n/2; i++)
    {
        /* code */swap(a[i],a[n-1-i]);
    }
    int start=0;
    for (int i = 0; i<=n; i++)
    {
        if (a[i]==' ' || a[i]=='\0')
        {
            int left=start;
            int right=i-1;
            while (left<right)
            {
                /* code */swap(a[left],a[right]);
                left++;
                right--;
            }
            start=i+1;
            
        }
        
    }
    cout<<a;
    
    
    return 0;
}