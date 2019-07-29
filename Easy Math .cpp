#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int a[105];
        vector< int > ans ;
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
               ans.push_back(a[i]*a[j]);
            }
        }
        int max_ans=0;
        for(int i=0;i<ans.size();i++)
        {
            int sum_of_digit=0;
            while(ans[i]!=0)
            {
                sum_of_digit += ans[i]%10;
                ans[i]/=10;
            }
            max_ans= max(max_ans,sum_of_digit);
        }
        cout<<max_ans<<endl;
    }
}
