#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class AIhabNeMozhetStatTanosom {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(2 * n);
        set<int> s;
        for (int i = 0; i < 2 * n; ++i) {
            cin >> a[i];
            s.insert(a[i]);
        }

        if (s.size() == 1){
            cout << -1 << endl;
        }
        else {
            sort(a.begin(), a.end());
            for (int i = 0; i < 2 * n; ++i) {
                cout << a[i] << " ";
            }
        }

	}
};
