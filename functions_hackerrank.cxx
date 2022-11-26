#include<iostream>
using namespace std;
int arr(int b[ ])
{
	int max=0;
	int i=0;
	while(i<=3)	{
		if(b[i]>max)
		max=b[i];
		i++;}
		cout<<max;
	return max;			
}
int main()
{
	int b[10];
	for(int i=0;i<=3;i++)
	{
		cin>>b[i];
	}
 arr(b);
}