#include <bits/stdc++.h>
using namespace std;

class CPeaks {
public:

    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,m;

        cin >> n >> m;

        vector<int> h(n + 1);

        vector<bool> used(n + 1,true);
        for (int i = 1; i <= n; ++i) {
            cin >> h[i];
        }


        for (int j = 0; j < m; ++j) {
            int x,y;
            cin >> x >> y;
            if (h[x] <= h[y]){
                used[x] = false;
            }
            if (h[y] <= h[x]){
                used[y] = false;
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            ans += used[i];
        }

        cout << ans << endl;


	}
};
