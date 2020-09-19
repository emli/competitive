#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BGoToJail {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin  >> n;

        vector<vector<int>> d(n,vector<int>(2));

        for (int i = 0; i < n; ++i) {
            cin >> d[i][0] >> d[i][1];
        }

        for (int i = 0; i + 2 < n; ++i) {
            if (d[i][0] == d[i][1] && d[i + 1][0] == d[i + 1][1] && d[i + 2][0] == d[i + 2][1]){
                cout << "Yes" << endl;
                return;
            }
        }
        cout << "No" << endl;
	}
};

