#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	char p[7];
	char s[]="string";
	int length=strlen(s);
	for(int i=0;i<length;i++)
	{
		p[i]=s[length - i];
	}
	printf("%s",p);
	return 0;
}

