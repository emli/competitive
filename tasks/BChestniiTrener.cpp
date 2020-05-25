#include <bits/stdc++.h>
using namespace std;

class BChestniiTrener {
public:
    void run(std::istream& cin, std::ostream& cout){
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        int ans = INT_MAX;
        for (int i = 0; i < n - 1; ++i) {
            ans = min(a[i + 1] - a[i],ans);
        }
        cout << ans << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while(t--){
            run(cin,cout);
        }
	}
};
