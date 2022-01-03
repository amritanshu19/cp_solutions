//https://cses.fi/problemset/task/1068/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    long long int n;
    cin>>n;
    while(n>1)
        {
        if(n%2==0)
        {
            cout<<n<<" ";
            n = 1ll* n/2;
            
        }
        else
        {
            cout<<n<<" ";
            n = 1ll* 3*n+1;
        }
        }
        cout<<1<<endl;
    
    return 0;
}
