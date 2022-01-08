//https://codeforces.com/contest/1353/problem/B
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++ )
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++ )
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        for(int i=0;i<n;i++ )
        {
            sum+=a[i];
        }
        for(int i=0;i<k;i++ )
        {
            if(b[i]>a[i])
            {
            sum = sum-a[i]+b[i];
            }
            else{
                continue;
            }
        }
    cout<<sum<<'\n';
    }
    return 0;
}
