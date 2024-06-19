#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char a[n], b[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-1;i<0;i--)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}