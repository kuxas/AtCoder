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

    string s;
    cin >> s;

    int cnt = 0;
    int ans = 0;
    rep(i, (int)s.size()) {
        if (s[i] != 'A' && s[i] != 'C' && s[i] != 'G' && s[i] != 'T') {
        ans = max(ans, cnt);
        cnt = 0;
        }
        else {
        cnt++;
        }
    }
    ans = max(ans, cnt);
    cout << ans << '\n';

    return 0;
}

/*
int cnt = 0, ans = 0;
for (char c : s) {
    if (c=='A' || c=='C' || c=='G' || c=='T') cnt++;
    else ans = max(ans, cnt), cnt = 0;
}
ans = max(ans, cnt);
cout << ans << '\n';

*/