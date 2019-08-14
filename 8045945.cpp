#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;

    while(t--)
    {
      scanf("%d %d",&n,&m);
     register int a[100005],i;
        for( i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+m);

        int v=m-1,r=0;
        if(m==1)
            printf("0\n");
        else
        {
            for(i=0;i<m;i++)
            {
                if(v>0)
                {
                    if(a[i]<v)
                    {
                        v=v-(a[i]+1);
                        r=r+(a[i]);
                    }
                    else
                    {

                        r=r+v;
                        v=v-v;
                    }
                }
                else
                    break;
            }
           printf("%d\n",r);
        }

    }
    return 0;


}
