#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class JParaTem {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin >> n;

        vector<int> a(n),b(n),c(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        for (int i = 0; i < n; ++i) {
            c[i] = a[i] - b[i];
        }

        ll ans = 0;

        sort(all(c));

        for (int i = 0; i < n; ++i) {
            if (c[i] <= 0){
                continue;
            }
            int pos = lower_bound(all(c),-c[i] + 1) - c.begin();
            ans += i - pos;
        }

        cout << ans << endl;

	}
};
