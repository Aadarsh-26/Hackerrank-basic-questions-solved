#include<iostream>
using namespace std;
int main()
{
	int m=0,n=0;
	int a[3],b[3],i,j;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<3;j++)
	{
		cin>>b[j];
	}
	for(int k=0;k<3;k++)
	{
		if(a[k]>b[k]){
			m++;}
			else if(a[k]<b[k]){
				n++;}
	}
	cout<<m<<" "<<n;
}