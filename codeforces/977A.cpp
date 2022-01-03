//https://codeforces.com/problemset/problem/977/A
//codeforces Wrong Subtraction
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    long long int n;
    int k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        if(n%10==0)
        {
            n = n*1ll/10;
            continue;
        }
        n= n*1ll-1;
    
    }
    cout<<n<<endl;
    return 0;
}
