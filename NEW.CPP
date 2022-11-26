#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=INT_MAX;
    cin>>n;
    int a[n];
for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=p){
         p=a[i];
        }
    }
    cout<<p;
}