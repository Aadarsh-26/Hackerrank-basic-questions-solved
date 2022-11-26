#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int max=0;
	int min=0;
	int m=0; int t=0;
	cin>>a[0];
	max=a[0];
	min=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			m++;
			max=a[i];
		}
		if(a[i]<min){
			t++;
			min=a[i];
		}
	}
	cout<<m<<" "<<t;
}
			
		