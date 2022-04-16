#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class PairPain {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        unordered_map<ll,ll> count;
        vector<ll> prefixSum(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            count[a[i]]++;
        }

        for (ll i = n - 1; i >= 0; --i) {
            if (i == n - 1){
                prefixSum[i] = (a[i] == 1);
            }else {
                prefixSum[i] = prefixSum[i + 1] + (a[i] == 1);
            }
        }

        ll ans = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == 1){
                ans += n - i - 1;
            }else if (i != n - 1){
                ans += prefixSum[i + 1];
            }
        }
        if (count[2] >= 1)
            ans += count[2] * (count[2] - 1) / 2;
        cout << ans << endl;
	}
};
