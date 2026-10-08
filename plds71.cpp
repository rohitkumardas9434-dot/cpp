#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int max=1;
    for (int  i = 2; i*i <=n; i++) //checking all the factors before n 
    {
        if (n%i==0)
        {
            int flag=1;
            for (int j =2; j*j<=i; j++)
            {
                if (i%j==0)
                {
                   flag=0;
                   break;
                }
                
            }
            if (flag==1 && i>max)
            {
        
               max=i;  
            }
            
        }
        
    }
    // now the question is what if the input number is itself a prime number , then should separately check n and update max
    bool prime=true;
    for (int i = 2; i*i <=n; i++)
    {
        if (n%i==0)
        {
            prime=false;
            break;
        }
        if (prime)
        {
           max=n;
        }
        
    }
    
    cout<<"The largest prime number is: "<<max<<endl;
    return 0;
}