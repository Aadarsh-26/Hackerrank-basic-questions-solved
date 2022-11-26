#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		int z=0;
		for(int i=0;i<n;i++){
			int m=int(s[i]);
			int q=int(s[n-i-1]);
			if(m!=q){
				if(m>q){
					while(m>q){
						m--;
						z++;
					}
				}
				else{
				
				while(q<m){
					q--;
					z++;
				}
			
		}
		}
		}
		cout<<z<<endl;
	
}
}
		
						
					