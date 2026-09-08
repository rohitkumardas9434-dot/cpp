#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char *a;
    a=(char*)malloc(50*sizeof(char));
    cout<<"Enter the string: "<<endl;
    cin.getline(a,50);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
    }
    cout<<"The string in opposite case is: "<<a<<endl;
    free(a);
    return 0;
}