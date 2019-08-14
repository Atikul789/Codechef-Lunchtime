#include<bits/stdc++.h>

using namespace std;

int main()
{
       ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    long long N;

   // cout<<c<<endl;
    while(T--)
    {
      cin>>N;
      int cnt=0,ld; 
      map<int,int > r;  
      while(1)
      {
          ld=N%10;
         if(ld==0 || r[ld]==2)
         {
             break;
         }
         else
         {
             cnt++;
             r[ld]++;
             N=ld;
             N=N*2;
         }
      }
      if(ld==0)  
      cout<<cnt<<endl;
      else
      {
          cout<<"-1"<<endl;
      }
    }
    
    
   
    
} 