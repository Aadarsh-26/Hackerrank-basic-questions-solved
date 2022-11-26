#include <iostream>
using namespace std;
int main()
{
	char s[9];
	cin>>s;
	if((s[1]+s[0])%2==0 && (s[4]+s[3])%2==0 && (s[5]+s[4])%2==0 && (s[7]+ s[8])%2==0 )
	{
	   if(s[2]=='A' || s[2]=='E' || s[2]=='I' || s[2]=='O' || s[2]=='U' || s[2]=='Y')
	   cout<<"invalid";
	   
	   else
	   cout<<"valid";
	}
	
	else
	cout<<"invalid";
	 return 0;
}
    