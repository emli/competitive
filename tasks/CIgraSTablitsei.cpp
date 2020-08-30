#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class CIgraSTablitsei {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;
        vector<vector<int>> a(n,vector<int>(m));

        vector<bool> row(n);
        vector<bool> col(m);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                if (a[i][j]){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!row[i] && !col[j]){
                    count++;
                    row[i] = col[j] = true;
                }
            }
        }

        if (count % 2 == 0){
            cout << "Vivek" << endl;
        }else {
            cout << "Ashish" << endl;
        }
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;

        while (t--){
            run(cin,cout);
        }
	}
};
