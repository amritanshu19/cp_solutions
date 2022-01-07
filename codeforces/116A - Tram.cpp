//https://codeforces.com/problemset/problem/116/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int tp[n], a[n], b[n], sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        sum = sum+b[i]-a[i];
        tp[i]=sum;
    }
    sort(tp,tp+n);
    cout<<tp[n-1];
    return 0;
}
