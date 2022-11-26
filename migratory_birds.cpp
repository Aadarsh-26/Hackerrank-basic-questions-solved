#include <stdio.h>
int main() 
{
    int n,i,max,ans;
    scanf("%d", &n);
    int a[n],h[6]={0};
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        h[a[i]-1]++;
    }
    max=h[0];
    for(i = 1;i < 5; i++)
    {
        if(max<h[i])
        {
            max=h[i];
            ans=i;
        }
   }
   printf("%d",ans+1);
   return 0;
}

			  
			  
			  