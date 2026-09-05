//finding the modulus of  a complex number 
#include<iostream>
#include<cmath>
using namespace std;
struct complex
    {
        float x;
        float y;
    };

int main()
{
    complex a,c;
    cout<<"Enter the real part of number : "<<endl;
    cin>>a.x;
    cout<<"Enter the imaginary part of number : "<<endl;
    cin>>a.y;
    cout<<"Modulus= "<<sqrt(a.x*a.x+a.y*a.y);

    
    return 0;
}