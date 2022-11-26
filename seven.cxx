#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
char a[100];
cin>>a;
int s=0;
for(int i=0;i<strlen(a);i++)
{
if(a[i]=='0' || a[i]=='6' || a[i]=='9')
s+=6;
else if (a[i]=='1')
s+=2;
else if (a[i]=='2'||a[i]=='3'||a[i]=='5')
s+=5;
else if(a[i]=='4')
s+=4;
else if(a[i]=='7')
s+=3;
else if(a[i]=='8')
s+=7;
}
if(s%2==0)
{
s=s/2;
while(s--)
{
	cout<<"1";
}
cout<<endl;
}
else
{
	s=s/2;
	s--;
	cout<<"7";
	while(s--)
	{
		cout<<"1";
	}
	cout<<endl;
}
}

return 0;
}