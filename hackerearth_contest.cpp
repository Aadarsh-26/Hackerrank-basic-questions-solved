#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
       int v[1000],p[1000];
		for(int i=0;i<n;i++){
			cin>>v[i]>>p[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
              if(v[j]>v[i]){
				 int temp=v[i];
				  v[i]=v[j];
				  v[j]=temp;
			  }
			}
		}
		int sum=0;
		int max=INT_MIN;
		int q,r,s;
		for(int i=0;i<n;i++){
			if(sum<=m){
        sum=sum+p[i];
		if(p[i]>max){
			p[i]=max;
			q=i;
		}
			}
			else {
				i=r;
			break;}
		}
		int vit=0;
		for(int i=r;i<n;i++){
		if((sum+p[q]/2+p[i])<=m){
		s=i;
		for(int j=0;j<=s;j++){
         vit=vit+v[j];
		}
		}
        else{
		
			for(int k=0;k<=s;k++){
         vit=vit+v[k];
		}
		}
		}
		cout<<vit<<endl;


	}
} 
