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
	int n,q;
	scanf("%d%d",&n,&q);
	int sum=0;
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum= sum xor ((int)log2((double)a[i]) + 1 ) % 2;
	}
	int x1[n+1], x2[n+1];
	memset(x1, 0, sizeof x1);
	memset(x2, 0, sizeof x2);
	for(int i=0;i<n;i++)
		x1[i+1] = x1[i] xor ((int)log2((double)a[i]) + 1 ) % 2;
	for(int i=n-1;i>0;i--)
		x2[i] = x2[i+1] xor ((int)log2((double)a[i]) + 1 ) % 2;
	int l,r;
	while(q--)
	{
		scanf("%d%d",&l,&r);
		if(sum xor x1[l - 1] xor x2[r])
			printf("Mishki\n");
		else
			printf("Hacker\n");
	}
	return 0;
}

