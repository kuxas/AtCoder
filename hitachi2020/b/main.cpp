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
    int a, b, m;
    cin >> a >> b >> m;

    vector<int> ref(a);
    rep(i, a) cin >> ref[i];
    vector<int> micro(b);
    rep(i, b) cin >> micro[i];

    int mn = *min_element(ref.begin(), ref.end()) + *min_element(micro.begin(), micro.end());
    rep(i, m) {
        int x, y, c;
        cin >> x >> y >> c;
        mn = min(mn, ref[x - 1] + micro[y - 1] - c);
    }
    cout << mn << '\n';
    return 0;
}