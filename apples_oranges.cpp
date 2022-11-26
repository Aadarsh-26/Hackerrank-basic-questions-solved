#include<iostream>
using namespace std;
int main()
{
	int s,t,a,b,n,m;
	int p=0,q=0;
	cin>>s>>t>>a>>b>>m>>n;
	int ap[m],bo[n];
	for(int i=0;i<m;i++)
    {
    	cin>>ap[i];
    	ap[i]=ap[i]+a;
    }
    for(int i=0;i<n;i++)
    {
    	cin>>bo[i];
    	bo[i]=bo[i]+b;
    }
  /*  for(int i=0;i<m;i++)
    {
    	ap[i]=ap[i]+a;
    }
    for(int i=0;i<n;i++)
    {
    	bo[i]=bo[i]+b;
    }*/
    
    for(int i=0;i<m;i++)
    {
    	if(ap[i]>=s && ap[i]<=t)
    	{
    		p++;
    	}
    }
    for(int i=0;i<n;i++)
    {
    	if(bo[i]<=t && bo[i]>=s)
    	{
    		q++;
    	}
    }
    cout<<p<<endl<<q;
}