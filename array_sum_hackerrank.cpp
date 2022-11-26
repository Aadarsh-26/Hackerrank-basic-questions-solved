#include<iostream>
using namespace std;
int main()
{
	long int s=0;
	int n;
	cin>>n;
	long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s=s+a[i];
	}
	cout<<s;
}
	