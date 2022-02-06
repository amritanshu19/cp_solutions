#include <bits/stdc++.h>
using namespace std;


int main()
{
   int n , m;
   cin>>n>>m;
   if(n==2&&m==3)
   {
      cout<<"YES\n";
   }
   else if(n!=2)
   {
      
      while(1)
      {
         int ct = 0;
         n+=2;
         for(int i=2; i<=sqrt(n);i++)
         {
            if(n%i==0)
            {
               ct++;
            }
         }
         if(ct==0&&n==m)
         {
            cout<<"YES\n";
            break;
         }
         else if(ct==0&&n!=m)
         {
            cout<<"NO\n";
            break;
         }
         else if(ct!=0&&n==m)
         {
            cout<<"NO\n";
            break;
         }
      }
   }
   else if(n==2&&m!=2)
   {
      cout<<"NO\n";
   }
   else if(n!=2&&m%2==0)
   {
      cout<<"NO\n";
   }
    return 0;
}
