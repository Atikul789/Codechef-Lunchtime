#include <bits/stdc++.h>
using namespace std;

int main() {
	int l;
	cin>>l;
	string s;
	cin>>s;
	string comp="aeiou";
	int a[150]={0};
	for(int i=0;i<l;i++)
	{
		a[s[i]]++;
	}
	int cnt=0;
	for(int i=0;i<5;i++)
	{
		if(a[comp[i]]>0)
		{
			cnt++;
		}
	}
	if(cnt>3)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}