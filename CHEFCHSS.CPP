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
		float f1,f2,r1,r2,r3,r4;
		cin>>f1>>f2>>r1>>r2>>r3>>r4;
		float p1,p2,p3,p4;
		cin>>p1>>p2>>p3>>p4;
		float x=0,y=0;
		x=(r1*p2)+(r2*(1-p2));
		x*=p1;
		x-=f1;
		y=(r3*p3);
		y+=p3*(r4*p4);
		y-=f2;
		//cout<<x<<" "<<y<<endl;
		if(x>y)
			cout<<"FIRST\n";
		else
			cout<<"SECOND\n";
	}
	return 0;
}

