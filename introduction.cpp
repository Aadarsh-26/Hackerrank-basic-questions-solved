#include<iostream>
using namespace std;
int main(){
	int V,n;
	cin>>V>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==V){
			cout<<i;
		}
	}
}