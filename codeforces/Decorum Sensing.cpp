//https://codeforces.com/gym/103496/problem/D
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    sort(A, A+n);
    for(int i=0; i<n; i++)
    {
        if(A[i]==0)
        {
            count++;
        }
        else if(A[i]<=count)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
