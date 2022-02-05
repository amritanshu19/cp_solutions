#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s; cin>>s;
    int ct =0;
    int j = abs(int(s[0])-int('a'));
    ct+=min(j,26-j);
    for(int i=1;i<s.size();i++)
    {
       int h = abs(int(s[i])-int(s[i-1]));
       ct+=min(h,26-h);
    }
    cout<<ct<<"\n";
    return 0;
}
