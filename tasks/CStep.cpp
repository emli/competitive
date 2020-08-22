#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class CStep {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll sum = 0;
        for (ll i = 1; i < n; ++i) {
            if (a[i - 1] > a[i]){
                ll d = abs(a[i] - a[i - 1]);
                sum += d;
                a[i] += d;
            }
        }

        cout << sum << endl;
	}
};
