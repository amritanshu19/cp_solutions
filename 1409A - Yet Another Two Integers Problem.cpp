//https://codeforces.com/problemset/problem/1409/A
#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    while(t)
    {
    int a, b,c, mv=0, i=10;
    cin>>a>>b;
    c = abs(a-b);
    while(i)
    {
        mv+=(c/i);
        c = c%i;
        i--;
        
    }
    cout<<mv<<'\n';
    t--;
    }
    return 0;
    
}
