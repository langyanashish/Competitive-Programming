#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
char stackk[410];
int top=-1;
void push(char item)
{
	stackk[++top]=item;
}
char pop()
{
	if(top>=0)
		return stackk[top--];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[410];
		scanf("%s",&a);
		char *c=a;
		while(*c != '\0')
		{
			switch(*c)
			{
				case '(':
					c++;
					break;
				case '+':
				case '-':
				case '*':
				case '/':
				case '^':
					push(*c);
					c++;
					break;
				case ')':
					cout<<pop();
					c++;
					break;
				default:
					cout<<*c;
					c++;	
			}
		}
		while(top>=0)
			cout<<pop();
		cout<<endl;
	}
	return 0;
}

