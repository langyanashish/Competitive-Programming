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
	int n,m;
	cin>>n>>m;
	char a[n][m];
	bool flag=false;
	LOOP(i,n)
	{
		LOOP(j,m)
		{
			cin>>a[i][j];
			if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y')
				flag=true;
		}
	}
	if(flag==true)
		cout<<"#Color";
	else
		cout<<"#Black&White";
	return 0;
}

