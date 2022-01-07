//https://codeforces.com/problemset/submit
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin>>n>>h;
    int a[n], count = n;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>h)
        {
            count++;
        }
    }
    cout<<count<<'\n';
    return 0;
}
