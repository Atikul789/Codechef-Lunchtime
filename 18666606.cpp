#include <bits/stdc++.h>

using namespace std;


int main() {
     ios_base::sync_with_stdio(false);
    int T;
    
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int mat[N+5][N+5];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>mat[i][j];
            }
        }
        int ans = 0 , st =0;
        for(int i=0;i<N;i++)
        {
            int sum = 0;
            int ii =0;
            int jj=st;
            st++;
            while(ii>=0  and ii<N and jj>=0  and jj<N)
            {
                sum = sum + mat[ii][jj];
                ii++;
                jj++;
            }
            //cout<<sum<<endl;
            ans = max ( ans, sum);
        }
        st=0;
       for(int i=0;i<N;i++)
        {
            int sum = 0;
            int ii =st;
            int jj=0;
            st++;
            while(ii>=0  and ii<N and jj>=0  and jj<N)
            {
                sum = sum + mat[ii][jj];
                ii++;
                jj++;
            }
           // cout<<sum<<endl;
            ans = max ( ans, sum);
        }
        cout<<ans<<endl;
    }
        

    return 0;
}