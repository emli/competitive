#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class FSedayaKonfeti {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll sum1 = 0;
        ll sum2 = 0;
        unordered_map<ll,int> prefix;
        unordered_map<ll,int> suffix;

        for (int i = 0; i < n; ++i) {
            sum1 += a[i];
            sum2 += a[n - i - 1];
            prefix[sum1] = i;
            suffix[sum2] = n - i - 1;
        }

        sum1 = 0;
        sum2 = 0;

        int ans = 0;
        for (int i = 0; i < n; ++i) {
            sum1 += a[i];

            if (suffix.contains(sum1) && i < suffix[sum1]){
                ans = max(ans,(i + 1) + (n - suffix[sum1]));
            }
        }
        cout << ans << endl;
	}
};
