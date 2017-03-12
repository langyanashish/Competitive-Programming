#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int x,y,sum;
	cin>>x>>y;
	if(x>200)
	x%=200;
	if(y>200)
	y%=200;
	sum=x+y;
	cout<<sum;
	return 0;
}
