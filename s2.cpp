#include<iostream>
using namespace std;

int main()
{
    char s[100];
    char s1[100];
   
    cout<<"Enter your string: "<<endl;
    cin.getline(s,100);
    
    int j=0;
    for ( int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]=='a' || s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I' || s[i]=='O'||s[i]=='U')
        {
            s1[j]=s[i];
            j++;
        }
        
         
    }
      for ( int i = 0; s[i]!='\0'; i++)
    {
        if (!(s[i]=='a' || s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I' || s[i]=='O'||s[i]=='U'))
        {
            s1[j]=s[i];
            j++;
        }
        
         
    }
    s1[j]='\0';

    cout<<s1<<endl;


    
    return 0;
}