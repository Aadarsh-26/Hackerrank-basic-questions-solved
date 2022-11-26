#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[11];
    int i=0;
    while(true){
          if(n>=1000 && n<4000){
            n=n-1000;
            s[i]='M';
        i++;
           
              }

          else if(n>=500 && n<1000){
             if(n>=900){
                 n=n-900;
                 s[i]='C';
                 s[i+1]='M';
            i=i+2;

             }
          else{
            n=n-500;
            s[i]='D';
        i++;
           }
          }
              
        else if(n>=100 && n<500){
             if(n>=400){
                 n=n-400;
                 s[i]='C';
                 s[i+1]='D';
            i=i+2;

             }
          else{
            n=n-100;
            s[i]='C';
        i++;
           }
              }

         else if(n>=50 && n<100){
             if(n>=90){
                 n=n-90;
                 s[i]='X';
                 s[i+1]='C';
                i=i+2;
             }
             else{
            n=n-50;
            s[i]='L';
        i++;
        }
             }
         else if(n>=10 && n<50){
             if(n>=40 ){
                 n=n-40;
                 s[i]='X';
                 s[i+1]='L';
            i=i+2;
             }
             else{
            n=n-10;
            s[i]='X';
        i++;
             }
        }

         else if(n>=5 && n<10){
              if(n>=9){
                 n=n-9;
                 s[i]='I';
                 s[i+1]='X';
                i=i+2;
             }else{
            n=n-5;
            s[i]='V';
        i++;
        }
         }
        else if(n>=1 && n<5){
             if(n>=4){
                 n=n-4;
                 s[i]='I';
                 s[i+1]='V';
            i=i+2;
             }
             else{
            n=n-1;
            s[i]='I';
        i++;
             }
        }

        else {
            break;
        }
        }
        for(int j=0;j<=i;j++){
            cout<<s[j];
        }
}

    
    

