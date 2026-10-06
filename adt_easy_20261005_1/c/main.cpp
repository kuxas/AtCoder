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

    int q;
    cin >> q;

    queue<int> que;

    while(q--) {
        int num;
        cin >> num;

        if (num == 1) {
            int x;
            cin >> x;
            que.push(x);
        } else {
            if (!que.empty()) {
                cout << que.front() << '\n';
                que.pop();
            } else {
                cout << '\n';
            }
        }
    }
    return 0;
}