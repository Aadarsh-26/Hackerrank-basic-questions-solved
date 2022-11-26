#include<iostream>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	
	int  *a[n];
	for(int i=0;i<=n-1;i++)
	{
		int t;
		cin>>t;
		a[i]=new int[t];
		for(int j=0;j<=t-1;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int t=1; t<=q;t++)
	{
		int m,b;
		cin>>m>>b;
		cout<<a[m][b]<<endl;
	}
}