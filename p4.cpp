//biggest odd number in a string

#include<iostream>
using namespace std;

int main()
{
    char a[100];
    cout<<"Enter your number: "<<endl;
    cin.getline(a,100);
    int n=0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        /* code */n++;
    }
    for (int i = n-1; i >=0; i--)
    {
        /* code */if (a[i]=='1' || a[i]=='3' || a[i]=='5'|| a[i]=='7' || a[i]=='9')
        {
            /* code */for (int j = 0; j<=i; j++)
            {
                /* code */cout<<a[j];
            }
            break;
            
        }
        
    }
    
    return 0;
}