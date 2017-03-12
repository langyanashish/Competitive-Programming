#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
bool isp(int x)
{
	if(x<=1) return false;
	if(x<=3) return true;
	if(x%2==0||x%3==0) return false;
	for(int i=5;i*i<=x;i+=6)
		if(x%i==0||x%(i+2)==0) 
			return false;
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		bool f=false;
		cin>>m>>n;
		while(m != n)
		{
			if(m+1 == n)
			{
				m++;
				break;
			}
			if(isp(m) == true)
			{
				if(f==false)
				{
					f=true;
					n++;
				}
				else
					n--;
			}
			else
				n++;
			m++;
			if(m == n)
				break;
		}
		cout<<m<<endl;
	}
	return 0;
}
