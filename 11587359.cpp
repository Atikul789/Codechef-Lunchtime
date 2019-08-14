#include<bits/stdc++.h>
using namespace std;
long long a[10000005];
int main()
{
    int t,n,i;
    long long s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
             scanf("%lld",&a[i]);
            //cout<<a[i]<<endl;
        }
         cin>>s;
        int flag=0;
         int e=n-1,st=0;
         long long sum=0;
        vector<int>v;
        while(st<=e)
        {
            if(sum<s && st!=e)
            {
                sum+=a[st];
                //cout<<"yes"<<endl;
                v.push_back(st+1);
            }
            if(sum==s)
            {
                flag=1;
                break;
            }
            if(sum<s)
            {
                sum+=a[e];
                v.push_back(e+1);
            }
            if(sum==s)
            {
                flag=1;
                break;
            }
            st++;
            e--;
            if(sum>s)
                break;

        }
        if(flag==1)
        {
            for(i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
               // printf("%ll ",v[i]);
            }
            printf("\n");
        }
        else
        {
            printf("BING\n");
        }

    }
}
