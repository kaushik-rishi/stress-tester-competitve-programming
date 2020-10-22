#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << " -> " << x << endl;
#define print(x)                          \
    for (auto &x_ : x) cout << x_ << " "; \
    cout << endl;
#define pb push_back
#define all(x) x.begin(), x.end()
#define prec(x, y) fixed << setprecision(y) << x

/*
Think of an easier solution because the problems you solve are always easy
-> Problems till Div-2 C are going to be ad-hoc
Think of change occuring in window (K periodic)
Binary Search
Traverse the array in reverse and check if any idea works out
*/

void solve(int tc_count) {
    int n, x, p, k;
    cin >> n >> x >> p >> k;
    --k;
    --p;

    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(all(a));

    if (a[p] == x) {
        cout << "0\n";
        return;
    }

    if (p < k) {
        if (a[p] < x) {
            cout << "-1\n";
            return;
        }
    } else if (p > k) {
        if (a[p] > x) {
            cout << "-1\n";
            return;
        }
    }

    int changes = 0;
    while (changes <= n) {
        if (a[p] == x) {
            cout << changes << endl;
            return;
        }
        a[k] = x;
        sort(all(a));

        changes++;
    }
    if (a[p] == x) {
        cout << changes << endl;
        return;
    }
    return;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int32_t tc = 1;
    cin >> tc;
    for (int tc_ = 1; tc_ <= tc; ++tc_) {
        solve(tc_);
    }
}
