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
		LL n;
		cin>>n;
		char a[n+1];
		scanf("%s",&a);
		//int l=strlen(a);
		LL ones=0;
		LOOP(i,n)
			if(a[i]=='1')
				ones++;
		LL ans=(ones*(ones+1))/2;
		cout<<ans<<endl;
	}
	return 0;
}

