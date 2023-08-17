#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int t=0,k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            k=k+a[i][j];
            if(i==0||j==0||i==n-1||j==m-1)t+=a[i][j];
        }
    }
    cout<<k-t;
}