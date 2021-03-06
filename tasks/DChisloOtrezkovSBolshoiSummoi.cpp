#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DChisloOtrezkovSBolshoiSummoi {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n,k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll sum = 0;
        int left = 0;
        ll ans = 0;
        for (int right = 0; right < n; ++right) {
            sum += a[right];

            while (sum - a[left] >= k){
                sum -= a[left];
                left++;
            }
            if (sum >= k)
                ans += (left + 1);
        }

        cout << ans << endl;
	}
};
