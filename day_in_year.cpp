#include<bits/stdc++.h>
#include<string.h>
using namespace std ;

int leap_year(int y){
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                // printf("the year %d --> leap year",y);
                return 1;
            }
            else{
                // printf("the year %d --> not a leap year",y);
                return 0;
            }
        }
        else{
            // printf("the year %d --> leap year",y);
            return 1;
        }
    }
    else{
        // printf("the year %d --> not a leap year",y);
        return 0;
    }
}

int main()
{
    int y;
    printf("enter the year ");
    scanf("%d",&y);

    // leap_year(y);

    // char a1[10] = "sunday", a2[10] = "monday", a3[10] = "tuesday", a4[10] = "wednesday", a5[10] = "thrusday",
    //      a6[10] = "friday", a7[10] = "saturday";

// ***store multiple strings in array***

    string A[ ] = {"monday", "tuesday", "wednesday", "thrusday", "friday", "saturday", "sunday"};

    // for(int i=0;i<7;i++){
    //     printf("%s\n",A[i]);
    // }
    int count=0;
    for(int i=1;i<=y;i++){
        if(leap_year(i)){
            count++;
        }
    }
    // printf("%d",count);
    int odd_days = count + y - 1;
    int rem = odd_days%7;
    if(leap_year(y)){
        rem=rem-1;
    }
   cout<<A[rem];

    return 0;
}