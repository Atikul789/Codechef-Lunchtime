#include <bits/stdc++.h>
using namespace std;

using namespace std;

long long T, A,B,C;

int main()
{
  
   cin>>T;
   while(T--)
   {
       
       cin>>A>>B>>C;
       long long e=(2*B)-(C+A);
       if(e!=0)
       {
           if(e<0)
           {
               e=-e;
               
           }
           if(e%2!=0)
               e++;
           cout<<e/2<<endl;
       }
       else
       {
           cout<<e<<endl;    
       }
   }
   
}