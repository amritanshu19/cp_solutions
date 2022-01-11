//https://codeforces.com/problemset/problem/266/B
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, t;
    cin>>n>>t;
    string s, a;
    cin>>s;
    a = s;
    while(t--)
    {
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                a[i]='G';
                a[i+1]='B';
            }
        }
        s = a;
    }
    cout<<a<<'\n';
    return 0;
}
