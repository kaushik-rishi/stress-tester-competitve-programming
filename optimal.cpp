#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define deb(x) cout << #x << " -> " << x << endl;
#define print(x)                          \
    for (auto &x_ : x) cout << x_ << " "; \
    cout << endl;
#define all(x) x.begin(), x.end()

void solve(int tc_count) {
    int n, x, p, k;
    // ip : n, x, p, k
    cin >> n >> x >> p >> k;

    vector<int> a(n + 1, 0);

    // 1 based indexing
    for (int i = 1; i <= n; ++i) cin >> a[i];

    // sorting the vector
    sort(all(a));

    // aldeady present
    if (a[p] == x) {
        cout << "0\n";
        return;
    }

    // changeable on the right => ability is to push the elements on the left
    // towards p
    if (p <= k) {
        if (a[p] < x) {
            cout << "-1\n";
            return;
        }

        // replace a[k] with x

        // find the index of first number greater than x on the left
        int index = 0;
        for (index = 1; index < p; ++index) {
            if (a[index] > x) {
                break;
            }
        }

        cout << (p - index + 1) << endl;
        return;
    }

    // changeable on the left => ability is to push the elements on the right
    // towards p
    if (p > k) {
        if (a[p] > x) {
            cout << "-1\n";
            return;
        }

        // find the index of first element greater than x on right
        int index = 0;
        for (index = p + 1; index <= n; ++index) {
            if (a[index] > x) {
                break;
            }
        }

        cout << (index - p) << endl;
        return;
    }
}

int32_t main() {
    // #ifdef dark_angel
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int32_t tc = 1;
    cin >> tc;
    for (int tc_ = 1; tc_ <= tc; ++tc_) {
        solve(tc_);
    }
}
