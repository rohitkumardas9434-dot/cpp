#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int a[n];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l, sl;

    // Initialize using the first two elements
    if(a[0] > a[1])
    {
        l = a[0];
        sl = a[1];
    }
    else
    {
        l = a[1];
        sl = a[0];
    }

    for(int i = 2; i < n; i++)
    {
        if(a[i] > l)
        {
            sl = l;
            l = a[i];
        }
        else if(a[i] > sl)
        {
            sl = a[i];
        }
    }

    cout << "Maximum = " << l << endl;
    cout << "Second maximum = " << sl << endl;

    return 0;
}