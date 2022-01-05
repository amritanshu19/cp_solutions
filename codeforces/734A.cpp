//https://codeforces.com/problemset/problem/734/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, An=0, Dn=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            An++;
        }
        else
        {
            Dn++;
        }
    }
    if(An>Dn)
    {
        cout<<"Anton\n";
    }
    else if(Dn>An)
    {
        cout<<"Danik\n";
    }
    else
    {
        cout<<"Friendship\n";
    }
    return 0;
}
