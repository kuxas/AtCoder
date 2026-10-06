#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // --- write code here ---
    string s;
    cin >> s;

    if ((int)s.size() % 2 == 1) {
        cout << "No\n";
        return 0;
    }
    rep(i, (int)s.size()) {
        if (i % 2 == 0) {
            if (s[i] != 'h' || (int)s.size() == 1) {
                cout << "No\n";
                return 0;
            }
        } else {
            if (s[i] != 'i') {
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
    return 0;
}