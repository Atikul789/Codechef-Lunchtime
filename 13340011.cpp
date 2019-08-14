#include<bits/stdc++.h>
using namespace std;
int main()
    
{
    int T;
    cin>>T;
    while(T--)
        {
        string f[5],s[5];
        int ans=0;
        for(int i=0;i<4;i++)
            {
            cin>>f[i];
           }
        for(int i=0;i<4;i++)
            {
             cin>>s[i];
            }
          for(int i=0;i<4;i++)
              {
              for(int j=0;j<4;j++)
                  {
                  if(f[i]==s[j])
                      {
                      ans++;
                      break;
                  }
              }
           }
        if(ans>=2)
            {
            cout<<"similar"<<endl;
        }
        else
            {
            cout<<"dissimilar"<<endl;
        }
            
       }
    
}