#include<iostream>
using namespace std;
int main() { 
    int n,k,energy = 100;
    cin >> n >> k;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
    cin >> ar[i];
    }
    for(int i = 0; i < n; i+=k)
    {
    	if(ar[i]==0)
    energy--;
    else
    energy-=3;
    }
    cout << energy << endl;
    return 0;
}

			