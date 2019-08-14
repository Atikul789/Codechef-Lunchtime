#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t,n,m;
int main()
{
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<int>ans;
        vector<string> sol, test;
        string s,tes;

        for(int i=0;i<n;i++)
        {
            cin>>s>>tes;
            sol.push_back(s);
            test.push_back(tes);
            int pof;
            if(s=="correct")
            {   
                pof=1;
                for(int j=0;j<m;j++)
                {
                   if(tes[j]=='0')
                   {
                       pof=0;
                       break;
                   }
                }
                ans.push_back(pof);
            }
            else
            {
                pof=0;
                for(int j=0;j<m;j++)
                {
                    if(tes[j]=='0')
                    {
                        pof=1;
                    }
                }
                ans.push_back(pof);
                
            }
        }
        int c=0,got_ans=0;
        for(int i=0;i<n;i++)
        {
            if(ans[i]==1)
            {
                c++;
            }
        }
        if(c==n)
        {
            got_ans=1;
            cout<<"FINE"<<endl;
        }
        for(int i=0;i<n;i++)
        {
            if(sol[i]=="correct" && ans[i]==0 && got_ans==0)
            {
                got_ans=1;
                cout<<"INVALID"<<endl;   
                break;
            }
        }
        if(got_ans==0)
        {
            cout<<"WEAK"<<endl;
        }
      
    }
    
}
