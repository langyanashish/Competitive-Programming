#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[51],b[51];
		cin>>a;
		int l=strlen(a);
		int m=l/2;
		int pos=0;
		for(int i=m-1;i>=0;i--)
		{
			b[pos++]=a[i];
		}
		for(int i=l-1;i>=m;i--)
		{
			b[pos++]=a[i];
		}
		LOOP(i,l)
			printf("%c",b[i]);
		cout<<endl;
	}
	return 0;
}

