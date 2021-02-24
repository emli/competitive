#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class EOtrezkiSNebolshimMnozhestvom {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,k;

        cin >> n >> k;

        vector<int> a(n),cnt(1e5 + 5);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int nums = 0;
        int left = 0;
        ll ans = 0;
        for (int right = 0; right < n; ++right) {
            cnt[a[right]]++;

            if (cnt[a[right]] == 1){
                nums++;
            }

            while (nums > k){
                cnt[a[left]]--;
                if (cnt[a[left]] == 0){
                    nums--;
                }
                left++;
            }

            ans += right - left + 1;
        }

        cout << ans << endl;

	}
};
