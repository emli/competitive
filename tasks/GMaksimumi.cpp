#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class GMaksimumi {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> b(n);

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }


        int x = 0;

        for (int i = 0; i < n; ++i) {
            int y = x + b[i];
            x = max(x,y);
            cout << y << " ";
        }

	}
};
