# 学び
vector/set/queueの違い
    ・vector
    vector<int> x;

    汎用性が高い.何にでも使えるので迷ったらvector

    ・set
    set<int> x;

    重複を許さない特徴がある.
    主に重複チェックがしたいときに使用する

    ・queue
    queue<int> x;

    最大の特徴がfifo
    bfs,順番処理の場合はこちらを使用

min_element
    vector<int> a(n);
    int mn = *min_element(a.begin(), a.end());

    配列の最小値を出力するだけならsortをしなくても min_element で出力できる.
    ただし min_elementはイテレータを返すため * をつけて値を返す.

next_permutation
    do {
        処理したい内容
    } while(next_permutation(v.begin(), v.end()));

    配列にて辞書順で一個次があればtrue,なければfalseを返す関数.
    使用するときはdo-whileと一緒に使うことが多い.
    do-whileの特徴として一回目は必ず処理を行う.
    これにより一回目を分けて考える必要がある場合には使用することが多い.

