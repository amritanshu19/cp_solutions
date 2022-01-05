//https://codeforces.com/problemset/problem/486/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, ans=0;
    cin>>n;
    if((n*1ll)%2==0)
    {
        cout<<(n*1ll)/2<<endl;
    }
    else
    {
        cout<<n*1ll/2-n<<endl;
    }
    return 0;
}
