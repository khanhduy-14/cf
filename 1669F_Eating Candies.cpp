#include <bits/stdc++.h>
#include <ios>
using namespace std;


int main (){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        };
        int j = n, r = 0, b = 0;
        for (int i = 0; i<j; i++) {
            b+=a[i];
            while (b > 0) {
                b -= a[j-1];
                j-=1;
            }
            if (i < j && b == 0) {
                r = max(r, i + 1 + n - j);
            }
        }
        cout << r << endl;


    }
    return 0;
}
