#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)

    {
        int n,m,c,cnt=0;
        cin>>n>>m>>c;
        for(int i=1;i<=sqrt(c);i++)
        {
            if(c%i==0)
            {
                int x=i;
                int y = c/i;
                //cout<<x<<" "<<y<<endl;
                if(x<=n && y<=m)
                    cnt++;
                swap(x,y);
                if(x<=n && y<=m && x!=y)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
