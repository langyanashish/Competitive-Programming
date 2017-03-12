#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int main()
{
	char a[50];
	gets(a);
	string b;
	cin>>b;
	int ans=strstr(a,b);
	if(ans)
		cout<<"Y";
	else
		cout<<"N";
	return 0;
}

