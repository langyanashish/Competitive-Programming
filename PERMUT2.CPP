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
	int n,a[100010];
	while(1)
	{
		cin>>n;
		if(n==0)
			break;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int flag=0;
		for(int i=1;i<=n;i++)
		{
			if(a[a[i]] != i)
			{
				flag=1;
				break;
			}
		}
		if(flag == 0)
			cout<<"ambiguous\n";
		else
			cout<<"not ambiguous\n";
	}
	return 0;
}

