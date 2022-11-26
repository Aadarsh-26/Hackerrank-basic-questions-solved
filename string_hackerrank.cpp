#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char ch;
	char s1[10000],s2[10000],s[10000];
	cin>>s1>>s2;
/*	for(int i=0;i<=strlen(s1)-1;i++)
	{
		s[i]=s1[i];
	}*/
	strcpy(s,s1);
	cout<<strlen(s1)<<" "<<strlen(s2)<<endl;
     cout<<strcat(s1,s2)<<endl;
	ch=s[0];
	s[0]=s2[0];
	s2[0]=ch;
	cout<<s<<" "<<s2;
}