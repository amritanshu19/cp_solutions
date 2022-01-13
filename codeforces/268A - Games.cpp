//https://codeforces.com/problemset/problem/268/A
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,c2=0; cin>>n;
    int h[n],a[n];
    for(int i=0; i<n;i++)
    {
        cin>>h[i]>>a[i];
    }
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(h[i]==a[j])
            {
                c2++;
            }
        }
    }
    cout<<c2<<endl;
    return 0;
}
