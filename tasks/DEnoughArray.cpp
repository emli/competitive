#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DEnoughArray {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,k;
        cin >> n >> k;
        vector<int> a(n + 1);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ans = 0;
        vector<int> x;
        go(0,n,k,ans,a,x);
        cout << ans << endl;

	}
};
