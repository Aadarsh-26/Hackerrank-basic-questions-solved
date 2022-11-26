#include<iostream>
using namespace std;
int main()
{
char a[100];
cin>>a;
for(int i=0;i<100;i++)
{
	if(a[i]<=90 && a[i]>=65)
	{
		a[i]=a[i]+32;
	}
	else if(a[i]>=97 && a[i]<=122)
	{
		a[i]=a[i]-32;
	}
}
cout<<a;
return 0;
}