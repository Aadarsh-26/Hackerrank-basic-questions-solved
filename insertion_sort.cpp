#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n-1;i++){
		cin>>a[i];
	}
	int p;
	int temp=0;
	cin>>a[n-1];
	int t=a[n-1];
	for(int i=n-1;i>=0;i--){
		  if(t<a[i-1]){
		  	a[i]=a[i-1];
		  }
		  else{
		  a[i]=t;
		  p=i;
		  temp=1;
		  }
		  if(p<=i){
		  for(int j=0;j<n;j++){
		  cout<<a[j]<<" ";}cout<<endl;
	}
	else{
	break;}
	if(temp==1){
		break;}	  
}
}
	
	