//In the name of allah
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    long long result=0,x;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        result+=x;
    }

    if(result%2==1)
        ++result;
        result=result/2;
    cout<<max(t,result);

 return 0;
}
