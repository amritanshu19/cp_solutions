//https://codeforces.com/problemset/problem/490/A
#include<bits/stdc++.h>
using namespace std;

int main()
{   
int n,pr=0, m=0, pe=0;
cin>>n;
int t[n];
vector<int>pro, mat, spo;
for(int i=0; i<n;i++)
{
    cin>>t[i];
    if(t[i]==1)
    {
        pr++;
        pro.push_back(i+1);
    }
    else if(t[i]==2)
    {
        m++;
        mat.push_back(i+1);
    }
    else
    {
        pe++;
        spo.push_back(i+1);
    }
}
int w = min(pr,min(m,pe));
cout<<w<<'\n';
for(int i=0; i<w;i++)
{
    cout<<pro[i]<<" "<<mat[i]<<" "<<spo[i]<<'\n';
}

    return 0;
}
