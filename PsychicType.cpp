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
	int N;
	cin>>N;
	int a[N+1],b[N+1];
	for(int i=1;i<=N;i++)
		cin>>a[i],b[i]=0;
	int S,E;
	cin>>S>>E;
	bool flag=false;
	while(1)
	{
		if(S==E)
		{
			flag=true;
			break;
		}
		if(b[S]>2 && S!=E)
			break;
		S=a[S];
		b[S]++;
	}
	if(flag==true)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	return 0;
}

