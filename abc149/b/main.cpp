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

    ll a, b, k;
    cin >> a >> b >> k;

    if(a >= k) cout << a - k << ' ' << b << '\n';
    else if (k - a <= b) cout << 0 << ' ' << b - (k - a) << '\n';
    else cout << 0 << ' ' << 0 << '\n';

    return 0;
}