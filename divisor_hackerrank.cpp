#include<iostream>
using namespace std;
void find_digits(int n){
	int a=0;
	int temp =n;
	while(temp!=0){
		int rem=temp%10;
		if(rem!=0 && n%rem==0)	a++; 
		temp=temp/10;
	}
	cout<<a<<endl;
}
int main()
{
	int t;
	cin>>t;
for(int i=t;i>0;i--)
{
	int n;
	cin>>n;
	find_digits(n);
}
}
		