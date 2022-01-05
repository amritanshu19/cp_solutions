//https://codeforces.com/problemset/problem/41/A (Translation)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    if(s.size()==t.size())
    {
        for(int i=0; i<s.size();i++)
        {
            if(s[i]!=t[s.size()-1-i])
            {
                cout<<"NO\n";
                return 0;
            }
        }
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";
    return 0;
}
