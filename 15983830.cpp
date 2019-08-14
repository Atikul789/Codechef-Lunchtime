#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,sum;
    cin>>T;
    
    while(T--)
    {
       string a,b,tab;
       cin>>a>>b; 
       if(a.size()<b.size())
       {
           swap(a,b);
       }
       if(a.size()>b.size())
       {
          for(int i=0;i<a.size()-b.size();i++)
          {
              tab=tab+'0';
          }
          b=tab+b; 
       }
       vector<int> ans;
       for(int i=0;i<a.size();i++)
       {
           sum=(a[i]-'0') + (b[i]-'0');
           ans.push_back(sum%10);
       }
       int f=0; 
       for(int i=0;i<ans.size();i++)
       {
           if(ans[i]>0)
           {
               f=1;
           }
           if(f)
           {
               cout<<ans[i];
           }
       }
       if(!f)
       {
           cout<<0;
       }
       cout<<endl; 
    }

    
    

}
