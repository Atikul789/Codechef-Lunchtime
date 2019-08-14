#include <bits/stdc++.h>
using namespace std;

using namespace std;

long long T, E,N[100005], K,S;

int main()
{
  
   cin>>T;
   while(T--)
   {
       
       cin>>E>>K;
       S=0;
       int ans=0;
       for(int i=0;i<E;i++)
       {
         cin>>N[i];
         S=S+N[i];  
       }
       for(int i=0;i<E;i++)
       {
           if(N[i]+K>S-N[i])
           {
               ans++;
           }
       }
       cout<<ans<<endl; 
   }
   
}