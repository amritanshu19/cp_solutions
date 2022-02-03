#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, k=1, j=0; cin>>n;
        int b[n];
        vector<int> A, C;
        for(int i=0; i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<n;i++)
        {
            if(i%2==0)
            {
                cout<<b[j]<<" ";
                j++;
            }
            else
            {
                cout<<b[n-k]<<" ";
                k++;
            }
        }
        
        
        cout<<"\n";
        
    }
    return 0;
}
