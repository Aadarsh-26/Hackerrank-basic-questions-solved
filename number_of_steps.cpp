#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=INT_MAX,count=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=p){
         p=a[i];
        }
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    cout<<count;
}