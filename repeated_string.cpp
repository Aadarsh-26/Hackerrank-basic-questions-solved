#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[100];
	cin>>a;
	long long l=strlen(a);
long long int n;
	cin>>n;
	long long x=0;
	long long i;
	for(i=l-1;i<n;i++){
		a[i+1]=a[x];
		x++;
	}
	long long m=0;
	for( i=0;i<n;i++)
	{
		if(a[i]=='a'){
			m++;
		}	
	}
		cout<<m;

}