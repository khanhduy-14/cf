#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n;i++)
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,k; cin >> n; cin>>k;
        map <int, int> fm, lm;
        f0 (i,n) {
            int x; cin >> x;
            if (fm.find(x) == fm.end()) {
                fm[x] = i;
            }
            lm[x] = i;
        };
        f0 (i, k) {
            int fi, ls; cin >> fi; cin>> ls;
            string res =(fm.find(fi) != fm.end() && lm[ls] > fm[fi]) ? "YES" : "NO";
            cout << res << endl;
        }
    }
    return 0;
}
