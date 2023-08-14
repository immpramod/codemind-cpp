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
    int c=0;
    int mini=INT_MAX;
    int a,b;
    cin>>a>>b;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a&&arr[i]<=b)
        {
            c=c+1;
            mini=min(mini,arr[i]);
        }
    }
    if(c>=1)
    {
        cout<<mini;
    }
    else
    {
        cout<<"-1";
    }

}