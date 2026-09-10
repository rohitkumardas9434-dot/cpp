#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    bool sorted = true;
    for(int i=1; i<n-1; i++)
    {
        if(a[i]<a[i-1]){
            sorted=false;
            break;
            

        }
    }
        if(sorted==false)
        {
            cout<<"The array is not sorted in non-increasing order."<<endl;
        }
        else
        {
            cout<<"The array is sorted in non-increasing order."<<endl;
        }
    return 0;
}