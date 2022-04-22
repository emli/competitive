#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class GPadenie {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;

        vector<vector<char>> a(n + 1,vector<char>(m + 1));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }

        for (int i = n - 1; i >= 0; --i) {
            for (int j = 0; j < m; ++j) {
                int p = i;
                while (a[p][j] == '*' && (p + 1 < n && a[p + 1][j] == '.')){
                    swap(a[p][j], a[p + 1][j]);
                    p++;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << a[i][j];
            }
            cout << '\n';
        }

	}
};
