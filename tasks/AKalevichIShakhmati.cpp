#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AKalevichIShakhmati {
public:
    static bool isRowFilled(int row, vector<vector<char>> &a) {
        for (int i = 0; i < a.size(); ++i) {
            if (a[i][row] == 'W'){
                return false;
            }
        }
        return true;
    }

    static bool isColumnFilled(int column, vector<vector<char>> &a) {
        for (int i = 0; i < a.size(); ++i) {
            if (a[column][i] == 'W'){
                return false;
            }
        }
        return true;
    }

    static void solve(std::istream& cin, std::ostream& cout) {
        int n = 8;

        vector<vector<char>> a(n,vector<char>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }

        bool ok = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (a[i][j] == 'W'){
                    ok = false;
                }
            }
        }
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            if (isRowFilled(i,a)){
                ans++;
            }
            if (isColumnFilled(i,a)){
                ans++;
            }
        }

        if (ok) {
            for (int i = 0; i < n; ++i) {
                if (isRowFilled(i, a) && isColumnFilled(i, a)) {
                    ans--;
                }
            }
        }
        cout << ans << endl;
	}
};
