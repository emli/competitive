#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BIntegerDivision {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll x;
        cin >> x;
        if (x < 0 && x % 10 == 0){
            cout << x / 10 << endl;
            return;
        }
        ll a = x / 10 - 1;
        ll b = x / 10 + 1;
        ll c = x / 10;

        vector<ll> ans;
        if (a <= x / 10) ans.push_back(a);
        if (b <= x / 10) ans.push_back(b);
        if (c <= x / 10 && (c > 0 && c % 10 != 0)) ans.push_back(c);

        cout << *max_element(all(ans)) << endl;
	}
};
