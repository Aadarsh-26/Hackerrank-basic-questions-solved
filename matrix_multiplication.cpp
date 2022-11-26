#include<iostream>
using namespace std;
int main()
{
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    if(q==r){
    int a[p][q];
    int b[r][s];
    int c[p][s];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>a[i][j];
        }
    }for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<s;j++){
            int sum=0;
            for (int k = 0; k < q; k++)
            {
              sum=sum+a[i][k]*b[k][j];
            }
              c[i][j]=sum;
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<s;j++){
            cout<<c[i][j]<<" ";
        }cout<<endl;
    }
    }
    else
    cout<<"matrix multiplication not possible";
}