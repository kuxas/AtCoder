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
    int s;
    cin >> s;

    /*
    int m = 0;
    while(s != 1) {
        if (s % 2 == 0) {
            s /= 2;
            m++;
        } else {
            s = 3 * s + 1;
            m++;
        }
    }
    cout << m + 2 << '\n';
    */

    set<int> seen;
    int m = 1;
    seen.insert(s);

    while (true) {
        if (s % 2 == 0) s /= 2;
        else s = 3 * s + 1;
        m++;

        if (seen.count(s)) break;
        seen.insert(s);
    }
    cout << m << '\n';
    return 0;
}