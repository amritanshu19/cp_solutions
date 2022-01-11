//https://codeforces.com/problemset/problem/271/A
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int y, a[4], r;
    cin>>y;
    for(int i=0; i<4; i++)
    {
        a[i]= y%10;
        y = y/10;
    }
        a[0]++;
            if(a[0]>=10)
            {
                a[0]=a[0]%10;
                a[1]++;
                if(a[1]>=10)
                {
                    a[1]=a[1]%10;
                    a[2]++;
                    if(a[2]>=10)
                    {
                        a[2]=a[2]%10;
                        a[3]++;
                    }
                }
            }
    
        while(1)
        {
            if(a[0]==a[1]||a[0]==a[2]||a[0]==a[3]||a[1]==a[2]||a[1]==a[3]||a[2]==a[3])
            {
            a[0]++;
            if(a[0]>=10)
            {
                a[0]=a[0]%10;
                a[1]++;
                if(a[1]>=10)
                {
                    a[1]=a[1]%10;
                    a[2]++;
                    if(a[2]>=10)
                    {
                        a[2]=a[2]%10;
                        a[3]++;
                    }
                }
            }
            
            
            
            }
            else
            {
                cout<<a[3]<<a[2]<<a[1]<<a[0];
                break;
            }
        }

        

    
    
    return 0;
}
