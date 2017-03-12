#include<bits/stdc++.h>
#include <sstream>
using namespace std;
#define LL      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
char dp[34000]={0};
void asHiSh_Langyan()
{
	char ch='A';
	int z=0,k=1;;
	for(int i=0;;i++)
	{
		dp[z]=ch;
		if(ch+1==91)
		{
			ch='A';
		}
		else
			ch++;
		z=z+k;
		k++;
		if(z>=34000)
			break;
	}
}
int main()
{
	asHiSh_Langyan();
	int t;
	cin>>t;
	while(t>0)
	{
		vector<int> v;
		char a[1000];
		gets(a);
		int l=strlen(a);
		cout<<a[l-1];
		cout<<a[l];
		/*for (int j =0; j < a.size(); j++)
        {
        	cout<<dp[a[j]];
		}*/
		cout<<endl;
		t--;
	}
	return 0;
}

