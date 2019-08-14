#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
string S;
int main() {
    ll T;
    cin>>T;
    while(T--)
    {
       cin>>S;
       int D[10]={0};
       for(int i=0;i<S.size();i++)
       {
           D[S[i]-'0']++;
       } 
       for(int i=65;i<=90;i++)
       {
           int f=i%10;
           int s=i/10;
           if(s==f && D[f]>1)
           {
               cout<<char(i);
           }
           if(D[f]>0 && D[s]>0 && s!=f)
           {
               cout<<char(i);
           }
       }
       cout<<endl; 
    }
    
    return 0;
}
