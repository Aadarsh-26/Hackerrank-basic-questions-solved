#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int jumps = 0, i = 0;
    while(i < n-1) {
        if(a[i+2] == 0) {
            jumps++;
            i += 2;
        }else if(a[i+1] == 0) {
            jumps++;
            i += 1;
        }
    }
    cout << jumps;
}
			
		