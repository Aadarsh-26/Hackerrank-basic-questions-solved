#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char c[n];
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	int level=0;
	int valley=0;
	for(int i=0;i<n;i++){
		if(c[i]=='U'){
			if(level==-1){
				valley++;
				level++;}
				else
				level++;
		}
		else
		  level--;
	}
	cout<<valley;
}