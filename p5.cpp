#include<iostream>
using namespace std;

int main()
{
    char a[100],b[100];
    cout<<"Enter something: "<<endl;
    cin.getline(a,100);
    cout<<"Now enter your goal: "<<endl;
    cin.getline(b,100);
    int n=0;
    int m=0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        /* code */n++;
    }
    for (int i = 0; b[i]!='\0'; i++)
    {
        /* code */m++;
    }
    if (m!=n)
    {
        /* code */cout<<"NO";
    }
    
    
    

    return 0;
}