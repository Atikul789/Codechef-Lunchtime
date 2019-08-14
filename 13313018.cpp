#include<bits/stdc++.h>
using namespace std;
long long Video_game[1000005], ans[100005];
int main()
    {
    int T;
    cin>>T;
    while(T--)
        {
        string Game;
        cin>>Game;
        for(int i=0;i<=Game.size();i++)
            {
            ans[i]=0;
        }
        for(int i=0;i<Game.size();i++)
            {
            if(Game[i]=='0')
                {
                Video_game[i+1]=0;
            }
            else
                {
                Video_game[i+1]=1;
            }
        }
        ans[Video_game[1]]++;
        for(int i=2;i<=Game.size();i++)
            {
            Video_game[i]=Video_game[i]+Video_game[i-1];
             ans[Video_game[i]]++;
        }
        long long result=0;
        for(long long i=1;i<=Game.size();i++)
            {
            //cout<<ans[i]<<" "<<i<<endl;
            if(ans[i]>1)
            result+=((ans[i])*(i));
        }
        cout<<result<<endl;
        
    }
}