#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    int p[n];
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    int k[n];
    for(int x=1;x<=n;x++)
    {
     for(int y=1;y<=n;y++){
     	if(p[p[y]]==x){
     		cout<<y<<endl;
     		break;
     	}
    }
    }
    return 0;
}