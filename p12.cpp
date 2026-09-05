//finding the second largest modulus of a complex number 

#include<iostream>
using namespace std;

struct Complex
{
    float x;
    float y;
};

int main()
{
    int n;
    cout<<"How many numbers are there? "<<endl;
    cin>>n;
    Complex a[100];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the real part of the number "<<i+1<<endl;
        cin>>a[i].x;
        cout<<"enter the imaginary part of the number "<<i+1<<endl;
        cin>>a[i].y;
    }
    int p=0;
    float largest=a[0].x*a[0].x+a[0].y*a[0].y;
    float second=a[1].x*a[1].x+a[1].y*a[1].y;
    for (int i = 0; i < n; i++)
    {
        float current=a[i].x*a[i].x+a[i].y*a[i].y;
        if(current>largest)
        {
            second = largest;
            largest=current;
        }
        float m=a[i].x*a[i].x+a[i].y*a[i].y;
        if (m>second && m<largest)
        {
            second=m;
            p=i;
        }
        
    }
    if (a[p].y>=0)
    {
        cout<<"The second largest number is "<<a[p].x<<" + "<<a[p].y<<"i";
    }
    else
    {
        cout<<"The second largest number is "<<a[p].x<<" - "<<-a[p].y<<"i";
    }
    return 0;
}