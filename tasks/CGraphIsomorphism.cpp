#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CGraphIsomorphism {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;

        vector<vector<int>> a(n + 1,vector<int>(n + 1));
        vector<vector<int>> b(n + 1,vector<int>(n + 1));

        for (int i = 0; i < m; ++i) {
            int x,y;
            cin >> x >> y;
            x--;
            y--;
            a[x][y] = a[y][x] = 1;
        }

        for (int i = 0; i < m; ++i) {
            int x,y;
            cin >> x >> y;
            x--;
            y--;
            b[x][y] = b[y][x] = 1;
        }

        vector<int> p;
        p.reserve(n);
        for (int i = 0; i < n; ++i) {
            p.push_back(i);
        }

        do {
            bool ok = true;

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {

                    if (a[i][j] + b[p[i]][p[j]] == 2 || a[i][j] + b[p[i]][p[j]] == 0){

                    }else {
                        ok = false;
                    }
                }
            }
            if (ok){
                cout << "Yes" << endl;
                return;
            }
        } while (next_permutation(all(p)));

        cout << "No" << endl;
	}
};
