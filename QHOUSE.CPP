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
	int x=0,y=0,z;
	char c='?';
	char ch[10];
	while(true)
	{
		x++;
		cout<<c<<" "<<x<<" "<<y<<endl;
		fflush(stdout);
		scanf("%s",ch+1);
		if(ch[1]=='N')
			break;
	}
	x--;
	int area = ((2*x) * (2*x));
	y=2*x;
	z=y;
	while(true)
	{
		x++;
		cout<<c<<" "<<x<<" "<<y<<endl;
		fflush(stdout);
		scanf("%s",ch+1);
		if(ch[1]=='N')
			break;
	}
	x--;
	int base=x,height;
	int temp=0;
	while(true)
	{
		y++;.
		cout<<c<<" "<<temp<<" "<<y<<endl;
		fflush(stdout);
		scanf("%s",ch+1);
		if(ch[1]=='N')
			break;
	}
	y--;
	y-=z;
	height=y;
	area += (base*height);
	cout<<"! "<<area;
	return 0;
}

