//https://codeforces.com/problemset/problem/758/A
#include<bits/stdc++.h>
using namespace std;

int main()
{   
int n;
cin>>n;
int a[n];
for(int i=0; i<n;i++)
{
    cin>>a[i];
}
unsigned int sum =0;
sort(a,a+n);
for(int i=0; i<n;i++)
{
    sum = sum+a[n-1]-a[i];
}
cout<<sum<<'\n';
    
}
