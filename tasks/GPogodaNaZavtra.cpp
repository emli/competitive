#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class GPogodaNaZavtra {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int d = a[1] - a[0];

        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] != d){
                cout << a.back() << endl;
                return;
            }
        }

        cout << a.back() + d << endl;
	}
};
