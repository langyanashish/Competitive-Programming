#include<bits/stdc++.h>
using namespace std;
#define ll      long long
#define pb		push_back
#define loop(i,n)  for(int i=0;i<n;i++)
#define mod		1000000007
int DP[10000][10000]={0};
int lc_subsequence(char *s1,char*s2,int len1,int len2)
{
	for(int i=1;i<=len1;i++)
	{
		for(int j=1;j<=len2;j++)
		{
			if(i==0 || j==0)
				DP[i][j]=0;
			else if(s1[i-1]==s2[j-1])
				DP[i][j]=1+DP[i-1][j-1];
			else
				DP[i][j]=DP[i-1][j-1];
		}
	}
	return DP[len1][len2];
}
int main()
{
	char a[10000],b[10000];
	cin>>a>>b;
	int l1=strlen(a);
	int l2=strlen(b);
	int ans=lc_subsequence(a,b,l1,l2);
	cout<<ans;
	return 0;
}

