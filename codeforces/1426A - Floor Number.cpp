#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, x; cin>>n>>x;
        if(n>=2)
        {
        float z = ((n-2)*1.0)/x;
        int y = ceil(z);
        cout<<y+1<<"\n";
        }
        else
        {
            cout<<1<<"\n";
        }
    }
    return 0;
}
