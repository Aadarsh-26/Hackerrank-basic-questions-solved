#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p;
	cin>>p;
	int t=0;
	if(p<=n/2){
	for(int i=1; i<=p;i++){
		if(i%2==0){
		t++;
	}
	else{
	if(i==1)
	t=0;}
	}
	}
	else
	for(int i=n;i>=p;i--){
		if((i+1)%2==0){
		if(i==n)
		t=0;
		else
		t++;
		}
	}
	cout<<t;
}