 #include<bits/stdc++.h>
 
using namespace std;
 
const int maxN = 100010;
int n,d;
int c[maxN];
int sum = 0;
void solve()
{
    scanf("%d%d",&n,&d);
 
    assert(n>0 && n<=1e5);
    assert(d>=0 && d<=1e9);
 
    sum+=n;
 
    for (int i=1;i<=n;i++){
	scanf("%d",&c[i]);
	assert(c[i]>=0 && c[i]<=1e9);
    }
 
    int x = c[1];
 
    sort(c+1,c+n+1);
 
    int poz = 0;
    for (int i=1;i<=n;i++)
	if (c[i]==x) poz = i;
 
 
     for (int i=1;i<n;i++)
	if (c[i+1]-c[i]>d)
     {
	 printf("NO\n");
	 return;
     }
 
     if (poz==1 || poz==n)
     {
	 printf("YES\n");
	 return;
     }
 
     int ok = 1;
     for (int i=poz+1;i<=n;i++)
	if (c[i]-c[i-2]>d) ok=0;
 
    if (ok)
    {
	printf("YES\n");
	return;
    }
 
    ok = 1;
    for (int i=poz-1;i>0;i--)
	if (c[i+2]-c[i]>d) ok = 0;
 
    if (ok) printf("YES\n"); else
	printf("NO\n");
 
}
int main()
{
    int t;
 
    cin>>t;
 
    assert(t>=1 && t<=1000);
 
    while(t--)
	solve();
 
    assert(sum<=1e6 && sum>0);
    return 0;
}
