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
	LL N,P;
	cin>>N>>P;
	vector<long long> a;
	LL x;
	LOOP(i,N);
	{
		cin>>x;
		a.PB(x);
	}
	int size=0;
	for(int i=0;i<N;i++)
	{
		for(int j=i;j<N;j++)
		{
			if((a[i]*a[j])%P != 1)
			{
				size=max(size,j-i+1);
			}
		}
	}
	int ans=0;
	//cout<<size<<endl;
	LOOP(i,N)
	{
		if(i+size-1 <= N)
			if((a[i]*a[i+size-1])%P != 1)
				ans++;
	}
	cout<<ans;
	return 0;
}

