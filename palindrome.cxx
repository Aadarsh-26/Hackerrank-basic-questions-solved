 #include<iostream>
#include<string.h>
using namespace std;
 int main()
{
 int i, j,x, flag=0;
char orig[100];
char rev[100];
cin>>orig;
x = strlen(orig);
for(i=x-1, j=0;i>=0, j<=x-1;i--,j++)
{
rev[j]=orig[i];
}
for(i=0;i<=x-1;i++)
{ 
     if(orig[i] != rev[i])
     flag =1;
     break;
}

if (flag == 1)

{cout<<"NO"; }
 else
{cout<<"YES"; }
return 0;
}