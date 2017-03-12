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
		LL H,S;
		cin>>H>>S;
		double P,B;
		double temp1=H*H - 4*S;
		double temp2=H*H + 4*S;
		if(temp1 < 0 || temp2 < H)
			cout<<"-1\n";
		else
		{
			B=((double)sqrt(temp1)+sqrt(temp2))/2;
            P=(double)sqrt(H*H - B*B);
            printf("%f %f %f\n",P,B,(double)H);
		}
	}
	return 0;
}

