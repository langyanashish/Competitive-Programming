#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD		long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int getTime()
{
    int h, m;
    scanf(" %d : %d ", &h, &m);
    return h * 60 + m;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int t1=getTime();
		int t2=getTime();
		int d;
		cin>>d;
		LD first = (t1 - t2) + d;
		LD second;
		if(t1-t2 >= 2*d)
		{
			second = t1-t2;
		}
		else
		{
			t2+=d;
			int w;
			if(t1<=t2)
			{
				w = t2 - t1;
				second = d + (d - w) / 2.0;
			}
			else
			{
				w = t1 - t2;
				second = d + (d - w) / 2.0 + w;
			}
		}
		cout.precision(1);
		cout << fixed;
		cout<<first<<" "<<second<<endl;
	}
	return 0;
}

