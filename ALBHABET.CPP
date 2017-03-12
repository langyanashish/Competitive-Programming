/*		August Lunchtime 2016	*/
#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
bool hash[30]={false};
int main()
{
	char s[30];
	cin>>s;
	int l=strlen(s);
	LOOP(i,l)
		hash[s[i]-'a']=true;
	int n;
	cin>>n;
	bool flag=true;
	char a[100000];
	LOOP(i,n)
	{
		cin>>a;
		l=strlen(a);
		LOOP(j,l)
			if(hash[a[j]-'a']==false)
				flag=false;
		if(flag==true)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		flag=true;
	}
	return 0;
}

