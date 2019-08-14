#include <bits/stdc++.h>
using namespace std;

int main()
{
 int T;
 cin>>T;
 while(T--)
 {
     int n,m;
     cin>>n>>m;
     int a, ans =0;
     for(int i=0;i<n;i++)
     {
         cin>>a;
         if(a%m==0)
         {
             ans++;
         }
     }
     long long po = 1;
     for(int i=0;i<ans;i++)
     {
         po = po*2;
     }
     cout<<po-1<<endl;
 }
    
    
  return 0;
}
