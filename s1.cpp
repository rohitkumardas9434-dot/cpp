#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter your string: "<<endl;
    getline(cin,s);
    int start=0;
    int end =s.size()-1;
    int flag=0;
    while(start<end)
    {
        if (s[start]!=s[end])
        {
            flag=1;
            break;
        }
        start++;
        end--;
    }
    if (flag==0)
    {
       cout<<"Is palindrome."<<endl;
    }
    else
    {
        cout<<"Not "<<endl;
    }

    return 0;
}