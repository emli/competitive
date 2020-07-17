#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class CSdelaiKhorosho {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        if (n <= 2){
            cout << n << endl;
            return;
        }
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool firstMinus = true;
        bool positive = false;
        for (int i = n - 1; i > 0; --i) {
            if (a[i] - a[i - 1] >= 0){
                positive = true;
                firstMinus = false;

            }
            if (a[i] - a[i - 1] < 0){
                if (firstMinus) {
                    firstMinus = false;
                    continue;
                }else if (positive){
                    cout << i  << endl;
                    return;
                }
            }
        }
        cout << 0 << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--)
            run(cin,cout);
	}
};
