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
    
    int a,b;
    cin>>a>>b;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a&&arr[i]<=b)
        {
            c=c+arr[i];
            
        }
    }
    cout<<c;
}