#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, m, res;
        cin>>n>>m;
        if(n%2==0)
        {
            res = n/2 * m;
        }
        else if(m%2==0)
        {
            res = m/2 * n;
        }
        else if(n%2!=0&&m%2!=0)
        {
            res = max(m,n)/2 * min(m, n)+ (min(m, n)+1)/2 ;
        }
        cout<<res<<'\n';
    }
    return 0;
}
