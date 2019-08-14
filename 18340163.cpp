#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int T,N;
 string s;
  cin>>T;
   while(T--)
   {
       cin>>N>>s;
       string sk;
       int dee=0, dum=0;
       for(int i=0;i<N;i++)
       {
           cin>>sk;
           if(sk[0]=='0')
           {
               for(int j=0;j<sk.size();j++)
               {
                   if(sk[j]=='0')
                   {
                       dee++;
                   }
               }
               
           }
           else
           {
               for(int j=0;j<sk.size();j++)
               {
                   if(sk[j]=='1')
                   {
                       dum++;
                   }
               }
           }
       }
       if(s=="Dee")
       {
          if(dee>dum)
       {
           cout<<"Dee"<<endl;
       }
           else
           {
               cout<<"Dum"<<endl;
           }
       }
       if(s=="Dum")
       {
           if(dum>dee)
       {
           cout<<"Dum"<<endl;
       }
           else
           {
               cout<<"Dee"<<endl;
           }
       }
       //cout<<dee<< " "<<dum<<endl;
       
       
   }
} 