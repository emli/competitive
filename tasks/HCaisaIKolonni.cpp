#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class HCaisaIKolonni {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        int cur = 0;
        int minCur = INT_MAX;
        for (int i = 0; i < n; ++i) {
            cur += a[i] - a[i + 1];
            minCur = min(minCur,cur);
        }

        if (minCur < 0){
            cout << abs(minCur) << endl;
        }else {
            cout << minCur << endl;
        }

	}
};
