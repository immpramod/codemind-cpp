#include<iostream>
#include<climits>
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
    int mini=INT_MAX;
    cin>>a>>b;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            c=c+1;
            mini=min(mini,arr[i]);
        }
    }
    if(c==0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<mini;
    }
}