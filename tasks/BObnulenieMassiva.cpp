#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BObnulenieMassiva {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll mx = *max_element(all(a));
        ll sum = accumulate(all(a), 0LL);

        cout << (sum % 2 == 1 || sum < 2 * mx ? "NO\n" : "YES\n");
	}
};

