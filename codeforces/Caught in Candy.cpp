//https://codeforces.com/gym/103496/problem/C
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, k;
    cin>>n>>h>>k;
    int x[n], y[n];
    double radi[n];
    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
        radi[i]=(sqrt((x[i]-h)*(x[i]-h)*1.0+(y[i]-k)*(y[i]-k)*1.0));
    }
    sort(radi, radi+n);
    cout<<2*radi[n-1]<<endl;
    return 0;
}
