//https://codeforces.com/problemset/problem/151/A
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k, l, c, d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<min((c*d)/n,min(((k*l)/nl)/n,(p/np)/n))<<'\n';
    return 0;
}
