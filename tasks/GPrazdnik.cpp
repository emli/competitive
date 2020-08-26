#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class GPrazdnik {
public:
    int dfs(int x,vector<vector<int>> &children){
       if (children[x].empty()){
           return 1;
       }

       int ans = 0;

       for (int child : children[x]) {
            ans = max(ans, dfs(child, children) + 1);
       }
       return ans;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;

        cin >> n;

        vector<vector<int>> children(n + 1);


        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            if (x == -1){
                continue;
            }

            children[x].push_back(i);
        }

        int ans = 1;
        for (int i = 1; i <= n; ++i) {
                ans = max(dfs(i, children),ans);

        }
        cout << ans << endl;
	}
};
