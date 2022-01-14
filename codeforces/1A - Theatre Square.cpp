//https://codeforces.com/problemset/problem/1/A
#include<bits/stdc++.h>
using namespace std;

void conversion( long long int counts)
{
  ostringstream ss;
  ss << fixed << counts;
  cout << ss.str() <<'\n';
}
int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    unsigned long long int k = ceil(m*1.0/a)*ceil(n*1.0/a) *1ll;
    conversion(k);
   
    return 0;
}
