#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int ans=0;
        string s;
        cin>>s;
        map<int,int>path_visited;
        path_visited[x]++;
        ans++;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                x++;
            }
            else
            {
                x--;
            }
            if(path_visited[x]==0)
            {
                ans++;
                path_visited[x]=1;
            }
        }
        cout<<ans<<endl;
    }
}
