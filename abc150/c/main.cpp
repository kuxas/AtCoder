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

/*
int kaijou(int n) {
    int x = n;
    while(x > 1) {
        x *= x - 1;
        x--;
    }
    return x;
}
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // --- write code here ---
    int n;
    cin >> n;

    //int mx = kaijou(n);

    //最初の配列
    vector<int> v(n);
    rep(i, n) v[i] = i + 1;

    //p,qの配列が辞書順で何番目か判定
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    vector<int> q(n);
    rep(i, n) cin >> q[i];

    int p_num = 0, q_num = 0, cnt = 0;
    
    do {
        if(v == p) p_num = cnt;
        if(v == q) q_num = cnt;
        cnt++;
    } while(next_permutation(all(v)));

    
    cout << abs(p_num - q_num) << '\n';
    return 0;
}