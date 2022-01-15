//
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int N, X;
 cin>>N>>X;
 int a[N];
 for(int i=0; i<N;i++)
 {
   cin>>a[i];
 }
 for(int i=0; i<N;i++)
 {
   for(int j=0; j<N;j++)
 {
   if(i!=j&&a[i]+a[j]==X)
   {
     cout<<"YES\n";
     return 0;
   }
 }
 }
 cout<<"NO\n";
     return 0;
}
