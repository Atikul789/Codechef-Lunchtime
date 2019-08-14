#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int st=0,e=s.size()-1,f=0;
      while(st<=e)
      {
          if(st!=e )
          {
                        if(s[st]!='.' && s[e]!='.' && s[st]!=s[e])
                        {
                            f=1;
                        }

                       if(s[st]=='.' && s[e]!='.')
                          {
                              s[st]=s[e];
                          }
                        if(s[e]=='.' && s[st]!='.')
                          {
                              s[e]=s[st];
                          }
                        if(s[e]=='.' && s[st]=='.')
                          {
                              s[e]=s[st]='a';
                          }



          }
          else
          {
              if(s[st]=='.')
              s[st]='a';
          }
          st++;
          e--;

      }
      if(f==0)
        cout<<s<<endl;
      else
        cout<<"-1"<<endl;

    }
}
