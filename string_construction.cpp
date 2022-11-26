#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n!=0){
		string str;
		cin>>str;
		int ans=str.length();
		for(int i=1;i<str.length();i++){
			for(int j=i-1;j>=0;j--){
			if(str[i]==str[j]){
			    ans--;
			    break;
			}
		/*	else{
			ans++;
			}*/
			
		}
		}
		cout<<ans<<endl;
		n--;
	}
}
			
				