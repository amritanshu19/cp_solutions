//https://codeforces.com/gym/103464/problem/A
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    vector<int>b;
    for(int i=0; i<n-1;i++)
    {
        b.push_back(a[i+1]-a[i]);
    }
    sort(b.begin(),b.end());
    cout<<b[0]<<endl;
    return 0;
    
}
