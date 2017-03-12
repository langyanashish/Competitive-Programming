#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
int hash[30]={0};
const int mod = (int)1e9 + 7;
char b[51];
void reset()
{
	LOOP(i,30)
		hash[i]=0;
	LOOP(i,51)
		b[i]='\0';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		reset();
		char a[51];
		cin>>a;
		int l=strlen(a);
		for(int i=0;i<l;i++)
			hash[a[i] - 'a']++;
		int pos=0;
		char x[]="0123456789";
		for(int i=0;i<30;i++)
		{
			if(hash[i])
			{
				if(hash[i] == 1)
					b[pos++]=(char)'a'+ i;
				else
				{
					b[pos++]=(char)'a'+i;
					if(hash[i] < 10)
						b[pos++]=x[hash[i]];
					else
					{
						int zz=hash[i]/10;
						int z=hash[i]%10;
						b[pos++]=x[zz];
						b[pos++]=x[z];
					}
				}
			}
		}
		cout<<b<<endl;
	}
	return 0;
}

