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
	LL n;
	char s;
	cin>>n>>s;
	LL d=0;
	LL x=n/4;
	if(n%4 == 0)
	{
		x--;
		d=2*x+1;
	}
	else
	{
		LL t=4*(x+1);
		d=2*x;
		if(t==n || t-2==n)
			d++;
	}
	LL ans=0;
	if(n==1 || n==3)
		d=0;
	if(n==2 || n==4)
		d=1,ans++;
	//cout<<d<<" "<<x<<endl;
	ans+=6*d;
	if(n>4)
	{
		ans+=1+(x-1)*4;
		ans+=3;
		if(n%4==2 || n%4==0)
			ans++;
	}
	switch(s)
	{
		case 'f':
			ans++;
			break;
		case 'e':
			ans+=2;
			break;
		case 'd':
			ans+=3;
			break;
		case 'a':
			ans+=4;
			break;
		case 'b':
			ans+=5;
			break;
		case 'c':
			ans+=6;
			break;
	}
	cout<<ans;
	return 0;
}

