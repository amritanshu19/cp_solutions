//https://codeforces.com/problemset/problem/96/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ct=1;
    for(int i=0; i<s.size()-1;i++)
    {

        if(s[i]==s[i+1])
        {
            ct++;
            if(ct>=7)
            {
                cout<<"YES\n";
                return 0;
            }
            continue;
        }
        ct=1;
    }
    cout<<"NO\n";
    
    return 0;
}
