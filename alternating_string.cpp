#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string str;
		cin>>str;
		int del=0;
		for(int i=0;i<str.length()-1;i++){
			if(str[i]==str[i+1]){
				del++;
			}
		}
		cout<<del<<endl;
	}
}