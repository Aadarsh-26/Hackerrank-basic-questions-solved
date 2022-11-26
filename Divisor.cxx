#include <iostream>
using namespace std;
int main()
{
	int I,r ,k,i,count=0;
	cin>>I;
     cin>>r;
	cin>>k;
	for(i=I;i<=r;i++)
	{
		if(i%k==0)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
			
	