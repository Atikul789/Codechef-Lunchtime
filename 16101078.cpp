#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    string s;
    cin>>T;
    while(T--)
    {
        cin>>s;
        int tribeA=0, tribeB=0,cnt=0,flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A' && flag==0)
            {
                tribeA++;
                flag=1;
               // cout<<"yes1"<<endl;
                continue;
            }
            if(s[i]=='B')
            {
                flag=0;
                cnt=0;
            }
            if(flag==1 &&  s[i]=='A' )
            {
                tribeA++;
               //cout<<"yes2 "<< s[i] <<endl;
                tribeA+=cnt;
                cnt=0;
            }
            if(flag==1 &&  s[i]=='.')
            {
               cnt++;
            }
           //cout<<tribeA<<" "<<i<<" "<<s[i]<<endl;
        }
        flag=0,cnt=0;
       for(int i=0;i<s.size();i++)
        {
            if(s[i]=='B' && flag==0)
            {
                tribeB++;
                flag=1;
               // cout<<"yes1"<<endl;
                continue;
            }
            if(s[i]=='A')
            {
                flag=0;
                cnt=0;
            }
            if(flag==1 &&  s[i]=='B' )
            {
                tribeB++;
               // cout<<"yes2 "<< s[i] <<endl;
                tribeB+=cnt;
                cnt=0;
            }
            if(flag==1 &&  s[i]=='.')
            {
               cnt++;
            }
           //cout<<tribeA<<" "<<i<<" "<<s[i]<<endl;
        }
        cout<<tribeA << " "<<tribeB<<endl;
    }
}