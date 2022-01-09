//https://cses.fi/problemset/task/1069
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    string s; 
    cin>>s;
    int ans = 1, temp = 1;
 
    
    for (int i = 1; i < s.size(); i++) {
        
        if (s[i] == s[i - 1]) {
            ++temp;
        }
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
    cout<<ans<<'\n';
    return 0;
}
