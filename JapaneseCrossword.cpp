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
	cin>>n;
	char a[n];
	cin>>a;
	bool f=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] == 'B')
			f=1;
	}
	int ans=0,c=0,j;
	vector<int> v;
	if(f == 1)
	for(int i=0;i<n;i++)
	{
		c=0;
		if(a[i] == 'B')
		{
			c=1;
			j=i+1;
			while(a[j] == 'B')
			{
				c++;
				j++;
			}
			v.PB(c);
			i=j-1;
		}
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	return 0;
}

