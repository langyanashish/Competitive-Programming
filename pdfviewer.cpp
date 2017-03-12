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
	int a[26];
	LOOP(i,26)	
		cin>>a[i];
	char word[20];
	cin>>word;
	int l=strlen(word);
	int h=0;
	LOOP(i,l)
		h=max(h,a[word[i]-'a']);
	l*=h;
	cout<<l<<endl;
	return 0;
}
