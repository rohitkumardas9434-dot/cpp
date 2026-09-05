//sorting complex  numbers with respect to modulus

#include<iostream>
#include<cmath>
using namespace std;

struct Complex
{
    float x;
    float y;
};

int main()
{
    int n;
    cout<<"How many numbers are there: "<<endl;
    cin>>n;
    Complex a[100];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the real part of the number "<<i+1<<endl;
        cin>>a[i].x;
        cout<<"Enter the imaginary part of the number "<<i+1<<endl;
        cin>>a[i].y;

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            float p=a[i].x*a[i].x+a[i].y*a[i].y;
            float q=a[j].x*a[j].x+a[j].y*a[j].y;
            if (p>q)
            {
                swap(a[i],a[j]);
            }
            
        }
        
    }
    cout<<"The sorted complex numbers are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].x<<" + "<<a[i].y<<"i"<<endl;
    }
    

    
    
    return 0;
}