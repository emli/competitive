#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DWeakTakahashi {
public:
    struct task {
        int x,y,dis;
    };
    static int dfs(int x, int y, vector<vector<char>> &a, int n, int m, vector<vector<int>> &dp){
        int &memo = dp[x][y];

        if (memo != -1){
            return memo;
        }
        int ans = 0;
        if (x + 1 < n && a[x + 1][y] == '.'){
            ans = max(dfs(x + 1,y,a,n,m,dp) + 1,ans);
        }

        if (y + 1 < m  && a[x][y + 1] == '.'){
            ans = max(dfs(x,y + 1,a,n,m,dp) + 1,ans);
        }
        return memo = ans;
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;

        vector<vector<char>> a(n,vector<char>(m));

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }

        cout << dfs(0,0,a,n,m,dp) + 1 << endl;



	}
};
