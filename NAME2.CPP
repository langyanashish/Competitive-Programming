#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
bool isSubSequence(char str1[], char str2[], int m, int n)
{
    if (m == 0) return true;
    if (n == 0) return false;
    if (str1[m-1] == str2[n-1])
        return isSubSequence(str1, str2, m-1, n-1);
    return isSubSequence(str1, str2, m, n-1);
}
int main()
{
	int t;
	cin>>t;
	char a[25010],b[25010];
	while(t--)
	{
		cin>>a>>b;
		int m=strlen(a);
		int n=strlen(b);
		bool x=isSubSequence(a,b,m,n);
		bool y=isSubSequence(b,a,n,m);
		if(x==true || y==true)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

