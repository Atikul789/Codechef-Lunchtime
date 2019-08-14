#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--)
    {
        string s,t;
        cin>>s>>t;
        int as[150]={0},at[150]={0};
        for(int i=0;i<s.size();i++)
        {
            as[s[i]]++;
            at[t[i]]++;
        }
        int ans=0,flag=0,ch=0;
        for(int i=0;i<150;i++)
        {
            if(as[i]>1 && at[i]==0)
            {
                ans=1;
            }
            if(as[i]>0 && at[i]==0)
            {
                flag=1;
            }
            if(at[i]>0 && as[i]==0)
            {
                ch=1;
            }
        }
        if(ch==0  && flag==1)
        {
            ans=1;
        }
        
        if(ans)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
    return 0;
}