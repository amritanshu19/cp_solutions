//https://codeforces.com/problemset/problem/1385/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z, k1, k2, k3;
        cin>>x>>y>>z;
        k1 = max(x,max(y,z));
        k2 = min(x,min(y,z));
        k3 = x+y+z - k1- k2;
        if(k1==k2)
        {
            cout<<"YES\n";
            cout<<k1<<" "<<k1<<" "<<k1<<"\n";
        }
        else if(k1==k3&&k2!=k1)
        {
            cout<<"YES\n";
            cout<<k2<<" "<<k2<<" "<<k1<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
