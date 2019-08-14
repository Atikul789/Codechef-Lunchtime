#include <bits/stdc++.h>
using namespace std;

using namespace std;



int main()
{
  int N, C=0;
   cin>>N;
   while(N--)
   {
       string u;
       cin>>u;
       int f=0;
       for(int i=0;i<u.size()-1;i++)
       {
           string s;
           s=s+u[i];
           s=s+u[i+1];
           if(s=="ch" || s=="he" || s=="ef")
           {
               f=1;
           }
       }
       if(f)
       {
           C++;
       }
   }
   cout<<C<<endl; 
}