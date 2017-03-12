#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int qty;
		float price,amount;
		cin>>qty>>price;
		amount=qty*price;
		if(qty>1000){
			amount=amount-(0.1*amount); 
		}
		cout<<amount<<endl;
	}
	return 0;
}
