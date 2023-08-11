#include<iostream>
using namespace std;
bool prime(int x)
{
    if(x==1)
    {
        return false;
    }
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int m,n,count=0;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
        if(prime(i))
        {
            count++;
        }
    }
    cout<<count;
}