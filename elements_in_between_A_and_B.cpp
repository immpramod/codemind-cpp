#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a,b,c=0;
    cin>>a>>b;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a&&arr[i]<=b)
        {
            c=c+1;
            cout<<arr[i]<<" ";
            
        }
    }
    if(c==0)
    {
        cout<<"-1";
    }
}