#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class JOrniePodmassivi {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        vector<int> ans(n);

        int t = n;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0){
                ans[i] = t--;
            }
        }

        for (int i = n - 1; i >= 0; --i) {
            if (i % 2 == 1){
                ans[i] = t--;
            }
        }

        for (int an : ans) {
            cout << an << " ";
        }
        cout << endl;

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
