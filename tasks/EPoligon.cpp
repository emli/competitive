#include <bits/stdc++.h>
using namespace std;

class EPoligon {
public:
    void run(std::istream& cin, std::ostream& cout){
        int n;
        cin >> n;
        vector<vector<int>> a(n,vector<int>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; ++i) {
            bool oneBefore = false;
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }
    }
    void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while(t--){
            run(cin,cout);
        }
    }
};
