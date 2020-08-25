#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class HIgraSFishkami {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,m,k;

        cin >> n >> m >> k;

        vector<pair<int,int>> init(k),target(k);

        vector<bool> get(k);

        for (int i = 0; i < k; ++i) {
            cin >> init[i].first >> init[i].second;
        }

        for (int i = 0; i < k; ++i) {
            cin >> target[i].first >> target[i].second;
        }

        string ans;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < m; ++j) {
                ans.push_back('L');
            }
            ans.push_back('D');
        }

        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < m; ++j) {
                ans.push_back('R');
            }
            ans.push_back('U');
        }

        cout << ans.size() << endl;
        cout << ans << endl;

	}
};
