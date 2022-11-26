#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int p=1;
	for(int i=1;i<s.length();i++){
		    if(int(s[i])>=65 && int(s[i])<=95){
		    	p++;
		    }
	}
		    cout<<p;
}
	