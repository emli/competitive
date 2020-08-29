#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BDoimKorov {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;
        cin >> n;
        vector<ll> a(n);

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll one = count(a.begin(),a.end(),1);
        ll zero = count(a.begin(),a.end(),0);

        ll y = 0;
        for (ll i = n - 1; i >= 0; --i) {
            if (a[i] == 1){
                one--;
            }else {
                y += one;
            }
        }
        

        ll x = 0;
        for (ll i = 0; i < n; ++i) {
            if (a[i] == 0){
                zero--;
            }else{
                x += zero;
            }
        }

        cout << min(x,y) << endl;
	}
};
