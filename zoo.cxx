#include <iostream>
using namespace std;
int main()
{
	char s[20];
	cin>>s;
	int i=0;
	int x=0;
	while(s[i]=='z')
	{
		x++;
		i++;
	}
	int y=0;
	while(s[i]=='o')
	{
		y++;
		i++;
	}
	if(y==2*x)
	{
		cout<<"Yes ";
	}
	else
	cout<<"No";
	
	return 0;
}