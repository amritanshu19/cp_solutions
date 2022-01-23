//https://codeforces.com/problemset/problem/1367/A
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int t; cin>>t;
  while(t--)
  {
    string s, p;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
      if(i%2==0||i==s.size()-1)
      {
        p.push_back(s[i]);
      }
    }
    cout<<p<<'\n';
  }
  return 0;
}
