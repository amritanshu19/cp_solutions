#include<bits/stdc++.h>
using namespace std;


int main()
{
  
   int t; cin>>t;
   while(t--)
   {
     int h, m, sum;
     cin>>h>>m;
    sum = (23-h)*60 + 60-m;
    cout<<sum<<'\n';
   }
    return 0;
}
