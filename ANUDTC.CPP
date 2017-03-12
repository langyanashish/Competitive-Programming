#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char a,b,c;
		if(360 % n == 0 )	a='y';
		else	a='n';
		if(n <= 360)	b='y';
		else	b='n';
		if(n<27)	c='y';
		else	c='n';
		printf("%c %c %c\n",a,b,c);
	}
	return 0;
}

