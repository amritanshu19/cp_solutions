//https://codeforces.com/problemset/problem/750/A
#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n, k, ct;
  cin>>n>>k;
  //using quadratic formula
  ct = floor((-5+sqrt(25+20*1.0*(480-2*k)))/10.0);
  cout<<min(ct, n)<<endl;
  return 0;
}
