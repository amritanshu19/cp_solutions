//https://codeforces.com/problemset/problem/32/B
#include<bits/stdc++.h>
using namespace std;


int main()
{
  
    string s, h; cin>>s;
    for(int i=0; i<s.size();i++)
    {
      if(s[i]=='.')
      {
        h.push_back('0');
      }
      else if(s[i]=='-'&&s[i+1]=='-')
      {
        h.push_back('2');
        i+=1;
      }
      else if(s[i]=='-'&&s[i+1]=='.')
      {
        h.push_back('1');
        i+=1;
      }
    }
    cout<<h<<'\n';
    return 0;
}
