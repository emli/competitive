#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BaidarochniiPokhod {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,w;
        cin >> n >> w;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        int l = 0;
        int r = a.size() - 1;

        int ans = 0;
        while (l <= r){
            if (a[l] + a[r] <= w){
                l++;
                r--;
                ans++;
            }else if (a[r] <= w){
                r--;
                ans++;
            }else if(a[l] <= w) {
                l++;
                ans++;
            }
        }

        cout << ans << endl;
	}
};
