#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class DMassivSNulevimOstatkom {
public:
    void run(std::istream& cin, std::ostream& cout){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.rbegin(),a.rend());

        int last = 0;
        int lastD;
        for (int i = 0; i < n; ++i) {
            if (a[i] % k != 0) {
                int x = max(a[i],last) / k;
                x++;
                int d = abs(x * k - a[i]);
                lastD = d;
                last = x * k;
            }
        }
        cout << lastD << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
