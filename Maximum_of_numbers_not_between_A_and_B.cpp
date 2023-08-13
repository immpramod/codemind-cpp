#include<bits/stdc++.h>
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
    int a,b;
    cin>>a>>b;
    int status=0,maxi=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            maxi=max(maxi,arr[i]);
            status=1;
        }
    }
    if(status==0)
    {
        cout<<-1;
    }
    else
    {
        cout<<maxi;
    }
}