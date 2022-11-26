#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int n=INT_MAX;
	int a[n] ;
	int i;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	
		for(i=0;i<=4;i++)
		{
	if(a[i]==42)
	break;
	cout<<a[i]<<endl;
		}
}