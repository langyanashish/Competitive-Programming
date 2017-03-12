#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		if(a.find("010") <a.length() || a.find("101")<a.length())
			cout<<"Good\n";
		else
			cout<<"Bad\n";
	}
	return 0;
}

