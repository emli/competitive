#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class DKurort {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;

        vector<int> parent(n + 1,-1);
        vector<int> type(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> type[i];
        }

        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            if (x != 0){
                parent[i] = 1;
            }
        }

        int ans = INT_MIN;
        for (int i = 1; i <= n; ++i) {
            if (type[i]){
                int x = i;
                int y = 1;
                while (parent[x]){
                    x = parent[x];
                    y++;
                }
                ans = max(ans,y);
            }
        }
        cout << ans << endl;
	}
};
