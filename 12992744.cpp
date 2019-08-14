#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,num,ans;
        cin>>N;
        vector<int>A;
        for(int i=0;i<N;i++)
        {
            cin>>num;
            A.push_back(num);
        }
        sort(A.begin(),A.end());
        for(int i=0;i<N-1;i++)
        {
            if(abs(A[i]-A[i+1])!=1)
            {
                ans=i;
                break;
            }

        }
        if(ans!=0)
        {
            ans++;
        }
        cout<<A[ans]<<endl;


    }
}
