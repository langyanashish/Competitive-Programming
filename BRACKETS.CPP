#include<bits/stdc++.h>
using namespace std;
#define max(a,b)	(a>b?a:b)
#define M 100000
int balance(string s)
{
	int balance=0;
	int max_balance=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i] == '(')
			balance++;
		else if(s[i] == ')')
			balance--;
		max_balance=max(max_balance,balance);
	}
	return max_balance;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int max=balance(a);
		for(int i=0;i<max;i++)
			printf("(");
		for(int i=0;i<max;i++)
			printf(")");
		cout<<"\n";
		//int bmax=balance(b);
		//cout<<max<<bmax;
	}
	return 0;
}

