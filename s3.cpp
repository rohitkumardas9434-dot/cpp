#include<iostream>
using namespace std;

int main()
{
    char a[20];
    cout<<"Enter your string: "<<endl;
    cin.getline(a,20);
    int flag=0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        int count=0;
        for (int j = 0; a[j]!='\0'; j++)
        {
            if (a[i]==a[j])
            {
                count++;
            }
            
        }
        if(count==1)
        {
            cout<<a[i]<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<-1<<endl;

    }
    
    return 0;
}