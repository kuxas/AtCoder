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

    int n, d, x;
    cin >> n >> d >> x;

    int sum = 0;
    rep(i, n) {
        int a;
        cin >> a;
        sum += (d + a - 1) / a;
    }

    cout << sum + x << '\n';
    return 0;
}