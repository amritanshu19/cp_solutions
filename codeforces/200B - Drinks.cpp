//https://codeforces.com/problemset/problem/200/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int fr[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>fr[i];
        sum+=fr[i];
    }
    cout<<sum*1.0/n<<'\n';
}
