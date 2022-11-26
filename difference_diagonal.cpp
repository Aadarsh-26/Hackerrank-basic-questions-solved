#include<iostream>
using namespace std;

void modulas(int x,int y)
{
	int p=x-y;
	if(p>=0)
	cout<<p;
	else 
	cout<<-(p);
}

int main()
{
	int n;
	int s=0,s1=0;
	cin>>n;
	int a[n][n];
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
			
		for(int i=0; i<n;i++)
	{
		
			s=s+a[i][i];
		
	}
		for(int i=0; i<n;i++)
	{
		
		  s1=s1+a[i][n-i-1];
		
	}
		modulas(s,s1);
	
}