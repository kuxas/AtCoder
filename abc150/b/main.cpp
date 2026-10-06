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
    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;
    for (int i = 2; i < n; i++) {
        if (s[i] == 'C' && s[i - 1] == 'B' && s[i - 2] == 'A') {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}