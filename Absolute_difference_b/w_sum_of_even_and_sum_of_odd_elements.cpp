#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],k=0,j=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            k=k+arr[i];
        }
        else
        {
            j=j+arr[i];
        }
    }
    if(j-k>0)
    {
        cout<<j-k;
    }
    else
    {
        cout<<k-j;
    }
    return 0;
}