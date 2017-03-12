#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(LL i=0;i<(n);i++)
#define FOR(i,a,b) for(LL i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	LL N;
	cin>>N;
	LL A[N+1];
	for(LL i=1;i<=N;i++)
		cin>>A[i];
	bool S[N+1][N+1];
	LOOP(i,N+1)
		LOOP(j,N+1)
			S[i][j]=false;
	LL x,y;
	LOOP(i,N-1)
	{
		cin>>x>>y;
		S[x][y] = S[y][x] = true;
	}
	LL M;
	cin>>M;
	LL T , V;
	LL ans=0;
	LOOP(i , M)
	{
		cin>>T>>V;
		if(T == 1)
		{
			for(LL i=1; i <= N; i++)
			{
				if(S[V][i] == true)
					A[i] += A[V];
			}
		}
		else
		{
			ans=A[V] % mod;
			cout<<A[V]%mod<<endl;
		}
	}
	return 0;
}

