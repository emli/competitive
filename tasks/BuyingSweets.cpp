#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BuyingSweets {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,r;
        cin >> n >> r;
        vector<int> a(n),b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<pair<int,pair<int,int>>> x;

        x.reserve(n);
        for (int i = 0; i < n; ++i) {
            x.push_back({-(b[i] - a[i]), {a[i],b[i]}});
        }

        sort(all(x));

        int ans = 0;
        for (int i = 0; i < n && r > 0; ) {
            if (r >= x[i].second.first){
                int times = r / x[i].second.first;
                r -= times * x[i].second.first;
                r += times * x[i].second.second;
                ans += times;
            }else {
                ++i;
            }
        }

        cout << ans << endl;
	}
};

