#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int a[26];
	char b[11];
	for(int i=0;i<26;i++){
		cin>>a[i];
	}
	cin>>b;
	int max=0;
	for(int i=0;i<26;i++){
		for(int j=0;j<strlen(b);j++){
			
			if(int(b[j])==97+i){
				b[j]=a[i];
				if(max<b[j]){
					max=b[j];
				}
			}
		}
	}
	int area=max*strlen(b);
	cout<<area;
}
	
	