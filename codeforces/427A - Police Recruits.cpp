//https://codeforces.com/problemset/problem/427/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, i=0;
  cin>>n;
  int arr[n];
  int cr=0, po=0, un=0;
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
    if(arr[i]>0)
    {
      po+=arr[i];
    }
    else if(po>0&&arr[i]<0)
    {
      po--;
    }
    else
    {
      un++;
    }
  }
  cout<<un<<endl;
  
  
  return 0;
  
}
