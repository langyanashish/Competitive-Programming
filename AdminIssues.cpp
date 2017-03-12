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
	LL n,q;
	cin>>n>>q;
	LL ans[n+1];
	//int time,points;
	LOOP(i,n+1)
		ans[i]=0;
	LL a[n+1][q+1];
	LL d=0,e=0;
	int maxim,minim;
	int maximm[n+1];
	LOOP(i,n)
	{
		maxim=INT_MIN;
		minim=INT_MAX;
		LOOP(j,q)
		{
		cin>>a[i][j];
		minim=min(minim,a[i][j]);
		maxim=max(maxim,a[i][j]);
		}
		maximm[i]=maxim;
		d=maxim-minim;
		ans[i]=d;
	}
	int z=0;
	int f=INT_MAX;
	LOOP(i,n)
	{
		if(ans[i] < f)
		{
			f=ans[i];
			z=i;
		}
		else if(ans[i] == f && maximm[i]<maximm[z])
			z=i;
	}
	cout<<z+1<<endl;
	return 0;
}

