#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int h[n];
	cin>>h[0];
	int max=h[0];
	for(int i=1;i<n;i++){
		cin>>h[i];
		if(h[i]>max){
			max=h[i];
	}
	}
	if(k>max){
		cout<<"0";
	}
	else{
	cout<<max-k;}
}
	
	
	