#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int h=0, k=0;
    while(k<=n)
    {
        h++;
        k+=(h*(h+1))/2;
    }
    cout<<h-1<<'\n';
    return 0;
}
