#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		int x=k/25;
		int n=k%25;
		if(n!=0)
    	{
    		for(int i=n;i>=0;i--)
    		printf("%c",97+i);
    		
    	}
    	for(int j=0;j<x;j++)
    	{
    		for(int i=25;i>=0;i--)
    		printf("%c",97+i);
    	}
		cout<<"\n";
	}
	return 0;
}

