#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
      string S;
      cin>>S;
      int ANS=1, C=1,TC=1;
      for(int i=0;i<S.size();i++)
      {
          if(S[i]=='>')
          {
              TC++;
            //  int V=1;
              C=1;
              ANS=max(TC,ANS);
            
          }
          if(S[i]=='<')
          {
              TC=1;   
              C++;
              ANS=max(ANS,C);
          }
      }
      
      cout<<ANS<<endl;  
    }
    
}