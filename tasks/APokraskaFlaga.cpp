#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class APokraskaFlaga {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,m;

        cin >> n >> m;

        vector<vector<char>> a(n,vector<char>(m));
        vector<vector<char>> b(n,vector<char>(m));
        vector<vector<char>> c(n,vector<char>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                if (isalpha(a[i][j])){
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if ((i + j) % 2 == 0){
                    b[i][j] = 'R';
                    c[i][j] = 'W';
                }else {
                    b[i][j] = 'W';
                    c[i][j] = 'R';
                }
            }
        }


        bool ok = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (isalpha(a[i][j])){
                    ok = ok & ( a[i][j] == b[i][j]);
                }
            }
        }

        if (ok) {
            cout << "YES" << endl;

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    cout << b[i][j];
                }
                cout << endl;
            }
            return;
        }

        ok = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (isalpha(a[i][j])){
                    ok = ok & ( a[i][j] == c[i][j]);
                }
            }
        }

        if (ok) {
            cout << "YES" << endl;

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    cout << c[i][j];
                }
                cout << endl;
            }
            return;
        }

        cout << "NO" << endl;
	}
};
