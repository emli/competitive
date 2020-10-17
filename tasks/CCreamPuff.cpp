#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class CCreamPuff {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;

        cin >> n;

        vector<ll> ans;
        for (ll i = 1; i * i <= n; ++i) {
            if (n % i == 0){
                ll x = n / i;
                if (x != i){
                    ans.push_back(x);
                    ans.push_back(i);
                }else {
                    ans.push_back(x);
                }
            }
        }
        sort(ans.begin(),ans.end());

        for (long long an : ans) {
            cout << an << endl;
        }
	}
};
