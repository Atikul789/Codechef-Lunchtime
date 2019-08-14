#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        long long a,sum=0,mean;
        vector<long long> A;
        for(int i=0;i<N;i++)
        {
            cin>>a;
            A.push_back(a);
            sum = sum + a;
        }
        long long ai =( (sum * N) - ( (sum ) *(N-1) ) ) / N;
        long long mod=  ((sum * N) - ( (sum ) *(N-1) ) ) % N;
        bool possible=false;
        for(int i=0;i<N;i++)
        {
            if(A[i]==ai && mod==0)
            {
                cout<<i+1<<endl;
                possible=true;
                break;
            }
        }
        if(!possible )
        {
            cout<<"Impossible"<<endl;
        }
    }

}
