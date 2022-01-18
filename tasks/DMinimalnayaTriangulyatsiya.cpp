#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DMinimalnayaTriangulyatsiya {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll n;
        cin >> n;
        vector<ll> dp(n + 1);
        dp[3] = 6;

        for (int i = 4; i <= n; ++i) {
            dp[i] = i * (i - 1);
        }

        cout << accumulate(all(dp),0L) << endl;
	}
};
