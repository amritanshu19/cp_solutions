//https://codeforces.com/problemset/problem/339/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int>A;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='+')
        {
            A.push_back((int)s[i]-'0');
        }
    }
    int t = A.size();
    sort(A.begin(), A.end());
    for(int i=0; i<t; i++)
    {
      if(i!=t-1)
      {
          cout<<A[i]<<'+';
      }
      else
      {
        cout<<A[i]<<'\n';
      }
    }

    
    return 0;
}
