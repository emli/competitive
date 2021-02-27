#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BObshchayaDlina {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n,s;
        cin >> n >> s;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll cur = 0;
        int left = 0;
        ll ans = 0;
        for (int right = 0; right < n; ++right) {
            cur += a[right];

            while (cur > s){
                cur -= a[left];
                left++;
            }

            ll x = right - left + 1;
            ans += (x * (x + 1) / 2);
        }

        cout << ans << endl;
	}
};
