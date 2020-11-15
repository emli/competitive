#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class CTravel {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,k;
        cin >> n >> k;

        vector<vector<int>> t(n + 1,vector<int>(n + 1));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> t[i][j];
            }
        }

        vector<int> a;
        a.reserve(n);
        for(int i = 1; i < n; ++i) {
            a.push_back(i);
        }

        int ans = 0;
        do {
            vector<int> b = {0}; b.insert(b.end(), a.begin(), a.end()); b.push_back(0);

            int sum = 0;
            for (int i = 0; i < b.size() - 1; ++i) {
                sum += t[b[i]][b[i + 1]];
            }
            ans += (sum == k);

        } while (next_permutation(all(a)));

        cout << ans << endl;
	}
};
