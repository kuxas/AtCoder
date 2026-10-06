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

    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());

    ll cnt = 0;
    rep(i, n) {
        if (i == n - 1 && x != a[i]) break;
        if (x >= a[i]) {
            x -= a[i];
            cnt++;
        } else break;
    }
    cout << cnt << '\n';
    return 0;
}