#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cout<<"Enter how many numbers: "<<endl;
    cin>>n;
    int* a=(int*)malloc(n * sizeof(int));
    if (a == nullptr) {
    cout << "Memory allocation failed." << endl;
    return 1;
}
    cout<<"Enter the numbers: "<<endl;
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"Enter how many numbers you want to reverse in a group: "<<endl;
    cin>>k;
     if (k <= 0) {
        cout << "Invalid group size." << endl;
        free(a);
        return 1;
    }
    for (int start = 0; start+k<=n;start+=k)
    {
        int left=start;
        int right=start+k-1;
        while (left<right)
        {
            swap(a[left],a[right]);
            left++;
            right--;
        }
        
    }
    cout<<"The final array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<a[i]<<" ";
    }
    free(a);
    return 0;
}