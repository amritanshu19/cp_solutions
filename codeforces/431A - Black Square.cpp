//https://codeforces.com/problemset/problem/431/A
#include<bits/stdc++.h>
using namespace std;


int main()
{
  
    int a1, a2, a3, a4;
    cin>>a1>>a2>>a3>>a4;
    long long int nsum =0;
    string s;
    cin>>s;
    for(int i=0; i<s.size();i++)
    {
      if(s[i]=='1')
      {
        nsum+=a1;
      }
      else if(s[i]=='2')
      {
        nsum+=a2;
      }
      else if(s[i]=='3')
      {
        nsum+=a3;
      }
      else if(s[i]=='4')
      {
        nsum+=a4;
      }
    }
    cout<<nsum<<'\n';
    return 0;
    
}
