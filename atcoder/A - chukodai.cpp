//https://atcoder.jp/contests/abc236/tasks/abc236_a
#include<iostream>
using namespace std;
 
int main()
{
  string s;
  cin>>s;
  int a, b;
  cin>>a>>b;
  char temp;
  temp = s[a-1];
  s[a-1]=s[b-1];
  s[b-1]=temp;
  cout<<s<<'\n';
  return 0;
}
