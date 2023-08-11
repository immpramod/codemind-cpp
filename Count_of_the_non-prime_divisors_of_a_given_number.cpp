#include<iostream>
using namespace std;
bool prime(int x)
{
    if(x==1)
    {
        return true;
    }
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return true;
        }
        
    }
    return false;
}
int main()
{
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(prime(i))
            {
                count++;
            }
        }
    }
    cout<<count;
}