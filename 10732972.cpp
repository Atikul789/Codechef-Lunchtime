#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
            scanf("%d",&n);
        float x,s=0;
        int flag=0,flag1=1;
        for(int i=0;i<n;i++)
        {
                scanf("%f",&x);
            if(x==2.0)
            {
                flag=1;
            }
            if(x==5.0)
                flag1=0;
             s=s+x;

        }
        //cout<<flag<<" "<<flag1<<endl;
        if((flag+flag1)==0)
        {

            float r=s/(float)n;
          //  cout<<r<<endl;
            if(r>=4.0)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
        {
            printf("No\n");
        }
    }

}
