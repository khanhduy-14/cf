#include<bits/stdc++.h>
#define f1(i,n) for (int i = 1; i<=n; i++)
#define maxn 200010
using namespace std;


int main() {
    int t; cin >> t;
    pair<int,int> a[maxn];
    while (t--) {
        int n; cin >> n;
        f1(i,n) cin >> a[i].first;
        f1(i,n) cin >> a[i].second;
        f1(i,n) {
            a[i].first = max(a[i-1].second, a[i].first);
            cout << a[i].second - a[i].first << " ";
        };
        cout << endl;

    }
    return 0;
}
