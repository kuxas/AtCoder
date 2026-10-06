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

    int n, q;
    string s;
    cin >> n >> q >> s;

    vector<int> ac(n, 0);
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == 'A' && s[i] == 'C') ac[i] = 1;
    }

    vector<int> sum(n + 1, 0);
    for (int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + ac[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << sum[r - 1] - sum[l - 1] << '\n';
    }
    /*
    for(int i = 1; i <= q; i++) {
        int l, r, ans = 0;
        cin >> l >> r;
        string part;
        for(int x = l; x <= r; x++) {
            part += s[x - 1];
        }

        for(int j = 1; j <= r - l + 1; j++) {
            if (part[j] != 'C') continue;
            else {
                if (part[j - 1] == 'A') ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0
    ;*/
}