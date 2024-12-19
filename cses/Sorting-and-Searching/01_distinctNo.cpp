#include <iostream>
#include <unordered_set>

using namespace std;

void solve() {
    int n;
    cin >> n;

    long long x;
    unordered_set<long long> s;

    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/cp/input.txt", "r", stdin);
    freopen("C:/cp/output.txt", "w", stdout);
#endif

    solve();
    return 0;
}