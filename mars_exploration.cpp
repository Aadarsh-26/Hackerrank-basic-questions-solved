#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int pop=0;
	for(int i=0;i<str.length();i=i+3){
	
			if(str[i]!='S'){
				pop++;
			}
			if(str[i+1]!='O'){
				pop++;
			}
			if(str[i+2]!='S'){
				pop++;
			}
	}
	
	cout<<pop;
}