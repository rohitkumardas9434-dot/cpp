//finding the maximum modulus

#include<iostream>
using namespace std;
struct complex
{
    float x;
    float y;
};


int main()
{
    int n;
    cout<<"how many numbers you wanna check? "<<endl;
    cin>>n;
    complex a[100];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the real part of number "<<i+1<<" : "<<endl;
        cin>>a[i].x;
        cout<<"enter the imaginary part of number "<<i+1<<" : "<<endl;
        cin>>a[i].y;

    }
    float max=a[0].x*a[0].x+a[0].y*a[0].y;
    int pos=0;
    for (int i = 0; i < n; i++)
    {
        float current =a[i].x*a[i].x+a[i].y*a[i].y;
        if (current>max)
        {
            max=current;
            pos=i;
        }
        
    }
    cout<<"number with largest magnitude is :"<<endl;
    cout<<a[pos].x<<" + "<<a[pos].y<<"i";
    
    return 0;
}