#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,g[3],y[3],r[3];
    cin>>t;
    while(t--)
    {
        vector<long long>ans;
        long long sum=0;
        for(int i=0;i<=2;i++)
        {
            cin>>g[i];
            sum+=g[i];
        }
        ans.push_back(sum);
        sum=0;
        for(int i=0;i<=2;i++)
        {
            cin>>y[i];
             sum+=y[i];
        }
        ans.push_back(sum);
        sum=0;
        for(int i=0;i<=2;i++)
        {
            cin>>r[i];
              sum+=r[i];
        }
          ans.push_back(sum);

           // cout<<"tes"<<endl;
        for(int i=0;i<=2;i++)
        {
            ans.push_back(g[i]+y[i]+r[i]);
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]>0 && ans[i]%2==0)
            {
                ans[i]--;
            }
        }

        sort(ans.begin(),ans.end());
        cout<<ans[ans.size()-1]<<endl;

    }

}
