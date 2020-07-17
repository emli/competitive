#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BVosstanovleniePerestanovkiPosleSliyaniya {
public:
    void run(std::istream& cin, std::ostream& cout){
        int n;
        cin >> n;
        vector<int> a(2 * n + 1);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> a[i];
        }

        vector<bool> used(n + 1);

        for (int i = 0; i < 2 *n; ++i) {
            if (used[a[i]] == 0){
                used[a[i]] = true;
                cout << a[i] << " ";
            }
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
