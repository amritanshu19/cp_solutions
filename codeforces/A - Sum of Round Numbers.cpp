//https://codeforces.com/contest/1352/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n, ct=0; cin>>n;
    vector<int>a;
    while(n>0)
    {
        a.push_back(n%10);
        if(n%10==0)
        {
          ct++;
        }
        n = n/10;
    }
      cout<<a.size()-ct<<endl;
      for(int i=0; i<a.size();i++)
      {
        if(a[i]!=0)
        {
          cout<<a[i]*pow(10,i)<<' ';
        }
      }
 
  }
  return 0;
  
}
