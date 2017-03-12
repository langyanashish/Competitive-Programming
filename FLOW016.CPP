#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,hcf,lcm,num1,num2;
		cin>>a>>b;
		num1=a;
		num2=b;
		do{
			if(num1>num2)
				num1-=num2;
			else
				num2-=num1;
		}while(num1!=num2);
		hcf=num1;
		lcm=a*b/hcf;
		cout<<hcf<<" "<<lcm<<endl;
	}
	return 0;
}
