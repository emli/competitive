#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BAlmostGCD {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int ans = -1;
        int res = 2;
        for (int i = 2; i <= 1000; ++i) {
            int cur = 0;
            for (int j = 0; j < n; ++j) {
                if (a[j] % i == 0){
                    cur++;
                }
            }
            if (cur > ans){
                ans = cur;
                res = i;
            }
        }
        cout << res << endl;
	}
};
