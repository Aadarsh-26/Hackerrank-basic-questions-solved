#include <iostream>
using namespace std;
int main() {

    long int i,n,tallest,nbr;
    tallest=0;
    nbr=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(tallest<a[i]){
            tallest=a[i];
            nbr=1;
        }else if (tallest==a[i]){
            nbr++;
        }
    }
    cout<<nbr;
    return 0;
}