#include <bits/stdc++.h>
#include <ios>
#define f0(i,n) for(int i = 0; i<n;i++)
#define f1(i,n) for(int i = 1; i<n;i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        vector <string> a(n);
        map <string, int> m;
        f0(i,n) {
            cin >> a[i];
            m[a[i]] = 1;
        }
        f0(i,n) {
            bool ok = 0;
            f1(j, a[i].size()) {
                    string s1 = a[i].substr(0,j);
                    string s2 = a[i].substr(j);
                if (m[s1] && m[s2]) {
                    ok = 1;
                    break;
                }
            }
            cout << ok;
        }
        cout<<endl;


    }
    return 0;
}
