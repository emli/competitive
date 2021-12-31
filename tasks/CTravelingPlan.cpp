#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CTravelingPlan {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a;

        a.push_back(0);

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }

        a.push_back(0);

        int sum = 0;
        int prev = 0;

        for (int i = 1; i <= n; ++i) {
            sum += abs(prev - a[i]);
            prev = a[i];
        }


        prev = 0;
        for (int i = 1; i <= n; ++i) {
            int ans = sum;
            ans -= abs(prev - a[i]);
            ans -= abs(a[i] - a[i + 1]);
            ans += abs(prev - a[i + 1]);
            prev = a[i];

            cout << ans << endl;
        }
	}
};
