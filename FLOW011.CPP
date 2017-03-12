#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float salary,da,hra,gross=0;
		cin>>salary;
		if(salary<1500){
			da=0.9*salary;
			hra=0.1*salary;
		}
		else if(salary>=1500){
			da=0.98*salary;
			hra=500;
		}
		gross=salary+da+hra;
		cout<<gross<<endl;
	}
	return 0;
}
