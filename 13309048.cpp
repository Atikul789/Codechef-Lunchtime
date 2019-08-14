#include<bits/stdc++.h>
using namespace std;
int T;

int main()
{
    cin>>T;
    while(T--)
    {
        int N,K,Index=-1,f=0;
        cin>>N>>K;
        set<int>ST;
        for(int i=1;i<=N;i++)
        {
            int P,Pi;
            cin>>P;
            for(int j=1;j<=P;j++)
            {
                cin>>Pi;
                ST.insert(Pi);
                if(ST.size()==K && f==0)
                {
                    Index=i;
                    f=1;
                }
            }
        }
        if(Index==-1)
        {
            cout<<"sad"<<endl;

        }
        else if(Index<N)
        {
            cout<<"some"<<endl;
        }
        else{cout<<"all"<<endl;}
    }

}
