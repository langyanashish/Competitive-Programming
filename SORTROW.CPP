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
	int n;
	scanf("%d",&n);
	vector < vector < int > > a(n, vector< int >(n,0));
	LOOP(i,n)
		LOOP(j,n)
			scanf("%d",&a[i][j]);
	LOOP(i,n)
		sort(a[i].rbegin(),a[i].rend());
	LOOP(i,n)
	{
		LOOP(j,n)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}

