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
	int t;
	cin>>t;
	while(t--)
	{
		float n,m,x;
		cin>>n>>m>>x;
		int temp,sum=0;
		LOOP(i,n)
		{
			cin>>temp;
			sum+=temp;
		}
		float num= (x*(n+1))-sum;
		//float grade=(sum+num)/(n+1);
		float new_grade=(sum+m)/(n+1);
		if(new_grade<x)
			cout<<"Impossible\n";
		else
			cout<<abs(num)<<endl;
	}
	return 0;
}

