#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BVasyaIKrasivieMassivi {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        int ans = -1;
        int mx = -1;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] > mx){
                mx = a[i];
            }
            if (ans == -1){
                ans = a[i];
            }else {
                ans = __gcd(ans,a[i]);
            }
        }
        
        for (int d = sqrt(mx) + 1; d >= 1; --d) {
            int localGcd = -1;
            for (int j = 0; j < n; ++j) {
                for (int x = 1; x <= a[j] / d; ++x) {
                    int y = d * x;
                    if (a[j] - y <= k && y > 0) {
                        if (localGcd == -1) {
                            localGcd = y;
                        } else {
                            localGcd = __gcd(localGcd, y);
                        }
                    } else {
                        localGcd = 1;
                    }
                }
            }
            ans = max(ans,localGcd);
        }
        cout << ans << endl;
	}
};
