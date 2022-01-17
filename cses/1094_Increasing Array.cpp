//https://cses.fi/problemset/task/1094
#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  long long int ct=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n-1;i++)
  {
    if(a[i+1]>=a[i])
    {
      continue;
    }
    else
    {
      int temp = a[i+1];
      ct+=(a[i]-a[i+1]);
      a[i+1]=a[i];
      a[i]=temp;
    }
  }
  cout<<ct<<endl;
  return 0;
}
