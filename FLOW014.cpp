#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int h,t,grade;
		float c;
		cin>>h>>c>>t;
		if(h>50 && c<0.7 && t>5600)	grade=10;
		else if(h>50 && t>5600)	grade=7;
		else if( c<0.7 && t>5600)	grade=8;
		else if(h>50 && c<0.7 )	grade=9;
		else if(h>50 || c<0.7 || t>5600)	grade =6;
		else 	grade =5;
		cout<<grade<<endl;
	}
	return 0;
}
