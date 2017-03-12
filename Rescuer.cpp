#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define EPS 1e-9
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
struct line 
{ 
	double a, b, c; 
};
double distance(double x1,double y1,double x2,double y2)
{
	return hypot(x1 - x2 , y1 - y2);
}
void pointsToLine(double x1,double y1,double x2,double y2, line &l) 
{
	//cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	if (fabs(x1 - x2) < EPS) 
	{
		l.a = 1.0;
		l.b = 0.0; 
		l.c = -x1;
	} 
	else 
	{
		l.a = -(double)(y1 - y2) / (x1 - x2);
		l.b = 1.0;
		l.c = -(double)(l.a * x1) - y1;
	} 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		line l1;
		double t1=0,t2=0;
		double x1,y1,x2,y2,v1,v2;
		cin>>x1>>y1>>x2>>y2>>v1>>v2;
		pointsToLine(x1,y1,x2,y2,l1);
		double xint = -(double)((l1.c)/l1.a);
		double ans = distance(xint,0,x1,y1);
		t1 =(double) ans/v1;
		//cout<<t1<<endl;
		ans=0;
		ans = distance(xint,0,x2,y2);
		t2 = (double) ans/v2;
		cout<<setprecision(5)<<fixed;
		cout<<t2+t1<<endl;
	}
	return 0;
}
