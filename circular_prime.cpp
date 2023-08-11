#include<iostream>
using namespace std;
bool prime(int x)
{
    if(x==1)
    {
        return false;
    }
    for(int i=2;i*i<x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int rev(int y)
{
    int digit=0;
    while(y>0)
    {
        int rev=y%10;
        digit=digit*10+rev;
        y/=10;
    }
    return digit;
}
int main()
{
    int n;
    cin>>n;
    int r=rev(n);
    if(!prime(n)&&!prime(r))
    {
        cout<<"not prime"<<endl;
    }
    else if(prime(n)&&prime(r))
    {
        cout<<"circular prime"<<endl;
    }
    else
    {
        cout<<"prime but not a circular prime"<<endl;
    }
}