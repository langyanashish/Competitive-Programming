#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
	return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{   
   float A = area (x1, y1, x2, y2, x3, y3);
   float A1 = area (x, y, x2, y2, x3, y3);
   float A2 = area (x1, y1, x, y, x3, y3);
   float A3 = area (x1, y1, x2, y2, x, y);
   if((x1==0 && y1==0) || (x2==0 &&  y2==0) || (x3==0 && y3==0))
		return true;
	//cout<<A<<" "<<A1<<" "<<A2<<" "<<A3<<endl;
   	return (A == A1 + A2 + A3);
}
bool isTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
	float A = area (x1, y1, x2, y2, x3, y3);
	if(A==0)
		return false;
	if((x1==x2 && y1==y2) || (x1==x3 &&  y1==y3) || (x2==x3 && y2==y3))
		return false;
	else
		return true;
}
int main()
{
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	if((x1==0 && y1==0) || (x2==0 &&  y2==0) || (x3==0 && y3==0))
		cout<<"Yes\n";
	else if(isTriangle(x1, y1, x2, y2, x3, y3))
	{
		if((x1==0 && y1==0) || (x2==0 &&  y2==0) || (x3==0 && y3==0))
			cout<<"Yes\n";
		else if (isInside(x1, y1, x2, y2, x3, y3, 0, 0))
    		printf ("Yes\n");
    	else
    		printf ("No\n");
	}
	else
		cout<<"Invalid\n";
	return 0;
}

