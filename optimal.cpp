#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "->" << x << endl;
#define print(x)                          \
    for (auto &x_ : x) cout << x_ << " "; \
    cout << endl;                         \
    s
int32_t main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, x, p, k;
        cin >> n >> x >> p >> k;
        vector<int> a(n + 1, 0);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        sort(a.begin(), a.end());

        if (a[p] == x) {
            cout << "0\n";
        }

        else if (p == k) {
            if (x > a[p]) {
                int index = p;
                while (index <= n && a[index] < x) index++;
                cout << (index - p) << endl;
            } else if (x < a[p]) {
                int index = p;
                while (index >= 1 && a[index] > x) {
                    index--;
                }
                cout << (p - index) << endl;
            }
        }

        else if (p < k) {
            if (a[p] < x) {
                cout << "-1\n";
            } else {
                int index = p;
                while (index >= 1 && a[index] > x) {
                    index--;
                }

                cout << (p - index) << endl;
            }
        }

        else if (p > k) {
            if (a[p] > x) {
                cout << "-1\n";
            } else {
                int index = p;
                while (index <= n && a[index] < x) {
                    ++index;
                }

                cout << (index - p) << endl;
            }
        }
    }
}