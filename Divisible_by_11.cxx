#include<iostream>
using namespace std;
int firstdigit(int x){
    while(x>=10){
        x/=10;
    }
    return x;
}
int main(){
   int a,n,d,sum1=0,sum2=0;
   cin>>n;
   for(int i=0;i<n;i++){
      cin>>a;
   if(i<n/2){
      if(i%2==0){
        sum1=sum1+firstdigit(a);}
      else
      {
      sum2+=firstdigit(a);
      }
   }
   else{
      if(i%2==0){
      sum1+=a%10;
      }
      else{ 
      sum2+=a%10;
      }
      }
   }

   if((sum1-sum2)%11==0)
   cout<<"OUI";
   else
   cout<<"NON";
   return 0;
}