//https://codeforces.com/problemset/problem/59/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int CU=0, CL=0;
    for(int i=0; i<s.size();i++)
    {
        if((int)s[i]<97)
        {
            CU++;
        }
        else
        {
            CL++;
        }
    }
    if(CU>CL)
    {
         for(int i=0; i<s.size();i++)
        {
        s[i]=toupper(s[i]);
        }
        cout<<s<<'\n';
    }
    else{
         for(int i=0; i<s.size();i++)
        {
        s[i]=tolower(s[i]);
        }
        cout<<s<<'\n';
    }
    return 0;
}
