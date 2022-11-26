#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		char a[10000];
		cin>>a;
		for(int i=0;i<=strlen(a)-1;i++)
		{
			if(i%2==0)
			{
				cout<<a[i];
			}
		}
		cout<<" ";
		for(int i=0;i<strlen(a);i++){
			if(i%2!=0)
			{
				cout<<a[i];
			}
		}
		cout<<endl;
		t--;
	}
}
		