#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int A[N];

    for(int i = 0;i < N;i++)
        cin>>A[i];
    
    long int sum = 0;
    for(int i = 0;i < N/2;i++){
        int digits =(int)log10(A[i]);
        int first_digit = (int)(A[i] / pow(10,digits));
        sum = (sum*10) + first_digit;
    }

    for(int i = N/2;i < N;i++){
        int last_digit = A[i] % 10;
        sum = (sum*10)+last_digit;
    }

    if(sum%11==0)
    {
    cout<<"OUI";
    }
    
    else{
    cout<<"NON";
    }
    return 0;
}