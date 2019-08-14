#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll P[100005];
int main() {
    ll T,N;
    cin>>T;
    while(T--)
    {
       cin>>N;
       for(int i=1;i<=N;i++)
       {
           P[i]=i;
       }
       for(int i=1;i<N;i=i+2)
       {
           swap(P[i],P[i+1]);
       }
       if(P[N]==N)
       {
           swap(P[N],P[N-1]);
       }
       for(int i=1;i<=N;i++)
       {
           cout<<P[i]<<" ";
       }
       cout<<endl; 
    }
    
    return 0;
}
