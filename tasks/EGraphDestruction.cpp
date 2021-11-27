#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class EGraphDestruction {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;

        vector<int> vertex(n + 1);

        vector<vector<int>> connections(n + 1);
        for (int i = 0; i < m; ++i) {
            int x,y;
            cin >> x >> y;
            connections[x].push_back(y);
            connections[y].push_back(x);
            vertex[x]++;
            vertex[y]++;
        }

        int ans = 1;
        for (int i = 1; i <= n; ++i) {
            if (vertex[i] == 0)
                ans--;
            else
                vertex[i] = 0;

            for (int j = 0; j < connections[i].size(); ++j) {
                if (vertex[connections[i][j]] == 0) continue;
                vertex[connections[i][j]]--;
                if (connections[i][j] > i && vertex[connections[i][j]] == 0){
                    ans++;
                }
            }
            cout << ans << endl;
        }
	}
};
