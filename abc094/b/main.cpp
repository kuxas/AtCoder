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

    int n, m, x;
    cin >> n >> m >> x;
    vector<int> a(m);
    rep(i, m) cin >> a[i];

    int upper = 0, lower = 0;
    rep(i, m) {
        if (a[i] < x) upper++;
        else lower++;
    }

    /*
    copilotさんが書いてくれた短めコード.読みやすいし理解しやすい.
    int left = 0;
    rep(i, m) left += (a[i] < x);
    cout << min(left, m - left) << '\n';
    */

    cout << (upper >= lower ? lower : upper) << '\n';
    return 0;
}