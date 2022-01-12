//https://codeforces.com/problemset/problem/144/A
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    int nmin, nmax;
    for(int i=n-1; i>=0;i--)
    {
        if(a[i]==b[0])
        {
            nmin = n-1-i;
            break;
        }
    }
    for(int i=0; i<n;i++)
    {
        if(a[i]==b[n-1])
        {
            nmax = i;
            break;
        }
    }
    if(nmin+nmax>=n)
    {
        cout<<nmin+nmax-1<<endl;
    }
    else
    {
        cout<<nmin+nmax<<endl;
    }
    return 0;
}
