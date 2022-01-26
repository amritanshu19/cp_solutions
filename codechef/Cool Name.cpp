//https://www.codechef.com/problems/CALPOWER
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int T; cin>>T;
    while(T--)
    {
      string s;
      int sum =0;
      cin>>s;
      sort(s.begin(),s.end());
      for(int i=0; i<s.size();i++)
      {
        sum+=((i+1)*(int(s[i])-int('a')+1));
      }
      cout<<sum<<'\n';
    }
  return 0;
}
