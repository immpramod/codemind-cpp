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
    int n1,n2,k;
    cin>>n1>>n2;
    k=n1+n2;
    while(k++)
    {
       if(prime(k))
       {
           cout<<k-n1-n2;
           break;
       }
    }
}