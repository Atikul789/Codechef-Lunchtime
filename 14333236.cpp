#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll T,C[1000005],W[1000005],N,bol[1000005]={0};
int main()
{
    cin>>T;
    while(T--)
    {
        cin>>N;
        for(int i=0;i<=N;i++)
        {
            bol[i]=0;
        }
        for(int i=1;i<=N;i++)
        {
            cin>>C[i];
        }
        for(int i=1;i<=N;i++)
        {
            cin>>W[i];
        }
        ll S=0,Ans=0,st=1;
        for(int i=1;i<=N;i++)
        {
          if(bol[C[i]]==0)
          {
              S=S+W[i];
              bol[C[i]]=1;
              Ans=max(Ans,S);
          }
          else
          {
              while(st<i)
              {
                  if(C[st]==C[i])
                  {
                      S=S-W[st];
                      bol[C[st]]=0;
                      bol[C[st]]=1;
                      S=S+W[i];
                      Ans=max(Ans,S);
                      st++;
                      break;
                  }
                  else
                  {
                     bol[C[st]]=0;
                      S=S-W[st];
                     st++; 
                  }
                  
              }
          }
        }
        cout<<Ans<<endl;
    }
    
    
}