#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int height=0;
		cin>>n;
		for(int i=0;i<=n;i++){
			if(i%2!=0){
				height=2*height;
			}
			else
			height++;
		}
		cout<<height<<endl;
	}
}
			