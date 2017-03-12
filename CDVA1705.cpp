#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
map<int,bool>mm;
bool conversion(LL m)
{
	LL temp=m;
	if(mm[m] == true)
		return true;
	bool flag=false;
	LL r;
   	while(temp>0)
	{
		r=temp%2;
		if(r==0)
		{
			if(flag == false)
				flag=true;
			else
			{
				mm[m]=true;
				return true;
			}
		}
		temp/=2;
	}
}
int main()
{
	int t;
	cin>>t;
	mm.clear();
	while(t--)
	{
		LL n;
		cin>>n;
		LL s=pow(2,n),ans=1;
		if(n==1)
		{
			cout<<"0\n";
			continue;
		}
		for(LL i=4;i<s;i++)
		{
			if(conversion(i) == true)
			{
				cout<<i<<endl;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

