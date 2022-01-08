//https://codeforces.com/problemset/problem/432/A
#include<bits/stdc++.h>
using namespace std;

int main()
{   
int n, k;
cin>>n>>k;
int y[n];
vector<int>An;
for(int i=0; i<n;i++)
{
    cin>>y[i];
    if(y[i]+k<=5)
    {
        An.push_back(y[i]);
    }
}
cout<<(An.size())/3<<'\n';
return 0;
    
}
