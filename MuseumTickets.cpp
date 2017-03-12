#include<bits/stdc++.h>
using namespace std;
#define LD      long long
#define LL      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	LL a10,a50,a100,a500,a1000,a5000;
	cin>>a10>>a50>>a100>>a500>>a1000>>a5000;
	LL price;
	cin>>price;
	LL m=0;
	if(a5000 > 0)
		m=5000;
	if(a1000 > 0)
		m=1000;
	if(a500 > 0)
		m=500;
	if(a100 > 0)
		m=100;
	if(a50 > 0)
		m=50;
	if(a10 > 0)
		m=10;
	LL total=0;
	total = total + a10*10 + a50*50 + a100*100 + a500*500 + a1000*1000 + a5000*5000;
	LL sum=total;
	sum-=m;
	LL tickets=0,temp;
	vector<LL> v;
	int i=1;
	for(i = 1 ; i*price <= total ; i++)
	{
		if(i*price > sum && i*price <= total)
			v.PB(i);
	}
	tickets=v.size();
	sort(v.begin() , v.end());
	cout<<tickets<<endl;
	sort(v.begin() , v.end());
	for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
	return 0;
}
