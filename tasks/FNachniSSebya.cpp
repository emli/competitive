#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class FNachniSSebya {
public:
    void dfs(int i,int j,vector<vector<char>> &a,int n,int m,int &ans){
        if (i == n - 1 && j == m - 1){
            return;
        }

        if (a[i][j] == 'R'){
            if (j + 1 < m){
                dfs(i,j + 1,a,n,m,ans);
            }else {
                ans++;
                a[i][j] = 'D';
                dfs(i + 1,j ,a,n,m,ans);
            }
        }else {
            if (i + 1 < n){
                dfs(i + 1,j,a,n,m,ans);
            }else {
                ans++;
                a[i][j] = 'R';
                dfs(i ,j + 1 ,a,n,m,ans);
            }
        }
    }
    void run(std::istream& cin, std::ostream& cout){
        int n,m;
        cin >> n >> m;
        vector<vector<char>> a(n,vector<char>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }
        int ans = 0;


        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                dfs(i,j,a,n,m,ans);
            }
        }
        cout << ans << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;

        while (t--)
            run(cin,cout);
	}
};
