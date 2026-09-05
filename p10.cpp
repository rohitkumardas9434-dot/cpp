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
    cout<<"enter the real part of number "<<i+1<<endl;
    cin>>a[i].x;
    cout<<"Enter the imaginary part of number "<<i+1<<endl;
    cin>>a[i].y;
   }

   float min=(a[0].x-a[1].x)*(a[0].x-a[1].x)+(a[0].y-a[1].y)*(a[0].y-a[1].y);
   int p=0;
   int q=1;
   for (int i = 0; i < n; i++)
   {
     for (int j = i+1; j < n; j++)
     {
        float current=(a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y);
        if (min>current)
        {
            min=current;
            p=i;
            q=j;

        }
        
     }
    
    }
    cout<<"The closest pair is: "<<endl;
    cout<<a[p].x<<" + "<<a[p].y<<"i "<<"and"<<endl;
    cout<<a[q].x<<" + "<<a[q].y<<"i";
   
   

    return 0;
}