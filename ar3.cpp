#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j=0;
    for(int i=1;i<n;i++){

        if(a[i]!=a[j]){
            j++;
            a[j]=a[i];
        }
    }
    cout << "Array after removing duplicates: ";
    for(int i = 0; i <= j; i++)
    {
        cout << a[i] << " ";
        
    }
    return 0;
}