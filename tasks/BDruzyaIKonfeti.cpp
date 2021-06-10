#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BDruzyaIKonfeti {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;

        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int sum = accumulate(all(a),0);

        int ans = 0;
        if (sum % n != 0){
            cout << -1 << endl;
        }else {
            for (int i = 0; i < n; ++i) {
                if (a[i] > sum / n){
                    ans++;
                }
            }
            cout << ans << endl;
        }
	}
};
