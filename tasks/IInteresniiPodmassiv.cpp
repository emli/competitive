#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class IInteresniiPodmassiv {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        for (int i = 2; i <= n; ++i) {
            if (abs(a[i] - a[i - 1]) >= 2){
                cout << "YES" << endl;
                cout << i - 1<< " " << i  << endl;
                return;
            }
        }

        cout << "NO" << endl;

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
