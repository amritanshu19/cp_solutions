//https://codeforces.com/problemset/problem/460/A
#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n, m, sum;
  cin>>n>>m;
  sum = n+ (n-1)/(m-1);
  cout<<sum<<endl;
  return 0;
}
