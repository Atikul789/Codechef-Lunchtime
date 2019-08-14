#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
ll ans=0;
int main() {

   ll A,B,i,MXi=0;
   cin>>A>>B;
   for(ll x=1;x<=A;x++)
   {
       for(ll i=x;i<=A;i++)
       {
           ll v=(i+1)*(i+1)-(x*x);
         if(v<=B)
         {
             ans++;
            // MXi=max(MXi,i);
         }
         else
         {
             break;
         }
       }
   }
  cout<<ans<<endl;
}