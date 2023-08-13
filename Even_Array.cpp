#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            c=c+1;
        }
    }
	if(c==n)
	{
	    cout<<"True"<<endl;
	}
	else
	cout<<"False"<<endl;
	return 0;
}
