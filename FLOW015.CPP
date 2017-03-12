#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int day=0,year,c=0;
		cin>>year;
		if(year>2001)
		for(int i=2001;i<year;i++)
		{
			if ( (i%4==0 && i%100!=0) || i%400 ==0 )
				day=day+366;
 			else
      			day=day+365;
		}
		else
		for(int i=year;i<2001;i++)
		{
			if ( (i%4==0 && i%100!=0) || i%400 ==0 )
				day=day+366;
 			else
      			day=day+365;
		}
		if(year==2001)
			cout<<"monday\n";
		else if(year>2001)
		switch(day%7)
		{
			case 0:
				cout<<"monday\n";
				break;
			case 1:
				cout<<"tuesday\n";
				break;
			case 2:
				cout<<"wednesday\n";
				break;
			case 3:
				cout<<"thursday\n";
				break;
			case 4:
				cout<<"friday\n";
				break;
			case 5:
				cout<<"saturday\n";
				break;
			case 6:
				cout<<"sunday\n";
		}
		else
		switch(day%7)
		{
			case 0:
				cout<<"monday\n";
				break;
			case 1:
				cout<<"sunday\n";
				break;
			case 2:
				cout<<"saturday\n";
				break;
			case 3:
				cout<<"friday\n";
				break;
			case 4:
				cout<<"thursday\n";
				break;
			case 5:
				cout<<"wednesday\n";
				break;
			case 6:
				cout<<"tuesday\n";	
		}		
	}
	return 0;
}

