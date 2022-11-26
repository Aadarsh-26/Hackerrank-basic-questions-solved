#include<iostream>
using namespace std;
int main(){
	int n;
	int shared=5;
	int like=0;
	cin>>n;
	for(int i=0;i<n;i++){
		like=like+(shared/2);
		shared=(shared/2)*3;
	}
	cout<<like;
}
		