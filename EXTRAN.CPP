#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		LOOP(i,n)
			scanf("%d",&a[i]);
		sort(a,a+n);
		bool flag = false;
		for(int i=0;i<n-1;i++)
		{
			if(a[i] == a[i+1])
			{
				printf("%d\n",a[i]);
				flag=true;
				break;
			}
		}
		int temp;
		if(flag == true)
			continue;
		int b[n-1];
		for(int i=0;i<n-1;i++)
		{
			b[i]=a[i+1]-a[i];
		}
		if(b[0]>1)
			printf("%d\n",a[0]);
		else
			printf("%d\n",a[n-1]);
	}
	return 0;
}

