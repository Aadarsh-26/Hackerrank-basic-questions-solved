#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t!=0){
		int n,m,b=0;
		cin>>n>>m;
		char arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
		for(int i=0;i<n;i++){
			int count=0;
			for(int j=0;j<m;j++){
				if(arr[i][j]=='#'){
				if(arr[i][j+1]=='#'){
                 count++;
				}
				else{
					int p=count;
					if(b<p){
						b=p;
					}

				}
				
				}
			}
		}
			
	
			cout<<b+1<<endl;
		
       t--;
	
}
}
