#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class BBounding {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> nums = {0};
        int t = 0;


        for (int i = 0; i < n; ++i) {
            t += a[i];
            nums.push_back(t);
        }

        int ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]  <= x){
                ans++;
            }
        }
        cout << ans << endl;
	}
};
