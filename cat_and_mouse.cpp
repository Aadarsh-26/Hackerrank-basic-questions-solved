#include<iostream>
using namespace std ;
int modulas(int a,int b){
 int  s=a-b;
 if(s>0){
    return s;
 }
 else{
    s=-(s);
    return s;
 }
}
int main()
{
	int q;
	cin>>q;
	while(q--){
		int x,y,z;
		cin>>x>>y>>z;
		int m=modulas(x,z);
		int n=modulas(y,z);
		if(m>n){
			cout<<"Cat B";
		}
		else if(m<n){
			cout<<"Cat A";
		}
		else{
		cout<<"Mouse C";}
		cout<<endl;}
}
	