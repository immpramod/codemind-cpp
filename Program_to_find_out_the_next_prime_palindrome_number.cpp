#include<iostream>
using namespace std;
bool palindrome(int n)
{
    int temp=n;
    int rem,rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if(temp==rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool prime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    while(n++)
    {
        
        if(palindrome(n) && prime(n))
        {
            cout<<n;
            break;
        }
    }
}