    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
       std::ios::sync_with_stdio(false);
       int a[3],x,y,T;
       cin>>T;
       while(T--)
       {
           cin>>a[0]>>a[1]>>a[2]>>x>>y;
           int cnt =0;
           if(x<y)
           {
               swap(x,y);
           }
           sort(a,a+3);

           if((a[0]+a[1]+a[2] == x+y) && (a[1]+a[2]>=x))
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }

    }
