#include<iostream>
#include<cstring>
using namespace std;

int main()
{

int  t,flag=0;
cin>>t;
string s;
cin>>s;
for(int i=0;i<t;i++)
{
	if(s[i]=='H' && s[i+1]=='H')
	{
		cout<<"NO"<<endl;
		flag=1;
		break;

	}
	else if((s[i])=='.')
	{

		
		s[i]='B';
			}
}
if(flag==0)
{

	cout<<"YES"<<endl<<s;
}

	 return 0;
}