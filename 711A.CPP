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
	int n;
	cin>>n;
	string s[n];
	LOOP(i,n)
		cin>>s[i];
	bool flag=false;
	LOOP(i,n)
	{
		if(s[i][0]=='O' && s[i][1]=='O')
		{
			flag=true;
			s[i][0]=s[i][1]='+';
			break;
		}
		else if(s[i][3]=='O' && s[i][4]=='O')
		{
			flag=true;
			s[i][3]=s[i][4]='+';
			break;	
		}
	}
	if(flag==false)
		cout<<"NO\n";
	else
	{
		cout<<"YES\n";
		LOOP(i,n)
			cout<<s[i]<<endl;
	}
	return 0;
}

