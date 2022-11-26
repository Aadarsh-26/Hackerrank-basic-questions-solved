#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min=a[0];
/*	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		   if(a[i]>a[j]){
		   	int temp=a[i];
		   	      a[i]=a[j];
		   	      a[j]=temp;
		   }
		}
	}*/
	for(int i=0;i<n;i++)
	{
		if(a[i]<min){
			min=a[i];
		}
	}
	 for(int i=0;i<n;i++)    
		{
	if((a[i]+1)%5==0)
	{
		  if(a[i]>37)
		  a[i]=a[i]+1;}
	
	else if((a[i]+2)%5==0)
	{
		 	if(a[i]>37){
		 	a[i]=a[i]+2;}
	}
	
		}
		for(int i=0;i<n;i++)
		{
		   	  cout<<a[i]<<endl;
		}
		

}
		   	  
		   	  		 		
		   	  		 		