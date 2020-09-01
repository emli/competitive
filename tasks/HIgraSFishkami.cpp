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

        string ans;

        string left(m - 1,'L');
        string down(n - 1,'D');

        ans.append(left).append(down);

        for (int j = 0; j < m; ++j) {
            for (int i = 0; i < n - 1; ++i)
                ans.append ((j%2 == 0) ? "U" : "D");
            ans.append("R");
        }
        cout << ans.size() << endl;
        cout << ans << endl;

	}
};
