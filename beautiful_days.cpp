#include<iostream>
#include<math.h>
using namespace std;
int reverse(int a){
	int rem,sum=0;
	while(a!=0){
		rem=a%10;
		sum=sum*10+rem;
		a=a/10;
	}
	return sum;
}
int add(int a , int b){
	int s=a-b;
	if(s<0){
		return (-s);
	}
	else
	return s;
}
int main(){
	int i,j,k;
	int b=0;
	cin>>i>>j>>k;
	for(int p=i;p<=j;p++){
		if(add(reverse(p),p)%k==0){
			b++;
		}
	}
	cout<<b;
}
			
		