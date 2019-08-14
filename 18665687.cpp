#include <bits/stdc++.h>

using namespace std;


int main() {
     ios_base::sync_with_stdio(false);
    int T;
    
    cin>>T;
    while(T--)
    {
        int K;
        string S;
        int ans =0;
        cin>>S>>K;
        for(int i=0; i<S.size() ; i++)
        {
            int a[150] = {0};
            for(int j=i;j<S.size();j++)
            {
                a[S[j]]++;
                int x = a[S[j]];
                int f=0, cnt = 0;
                for(int k=97;k<=122;k++)
                {
                    if(a[k]>0 && x!=a[k])
                    {
                        f=1;
                        break;
                    }
                    if(a[k]>0 && a[k]==x)
                    {
                        cnt++;
                    }
                }
                //cout<<cnt<<endl;
                if(!f && cnt>=K )
                {
                    ans++;
                }
                
            }
            
        }
        cout<<ans<<endl;
    }
        

    return 0;
}