#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    int width[n];
    for(int i = 0; i < n; i++) cin >> width[i];
    for(int qq = 0; qq < t; qq++){
        int i, j;
        cin >> i >> j;
        int m = 3;
        for(int k = i; k <= j; k++){
            m = min(m, width[k]);
        }
        cout << m << endl;
    }
    return 0;
}