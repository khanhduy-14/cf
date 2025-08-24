#include<bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin>> n;
        vector <string> a[3];
        map <string, int> m;
        for (int i = 0; i< 3;i++) {
            for (int j=0; j<n;j++) {
                string s; cin >> s;
                a[i].push_back(s);
                m[s]++;
            }
        }
        int cnt[3] = {};

        for (int i = 0; i< 3;i++) {
          for (string s: a[i]) {
              if (m[s] == 1) cnt[i]+=3;
              if (m[s] == 2) cnt[i]+=1;
          }
        }
        cout << cnt[0] << " " << cnt[1] << " " << cnt[2] << endl;
    }
    return 0 ;
}
