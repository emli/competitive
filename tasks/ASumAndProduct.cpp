#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ASumAndProduct {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll s,p;
        cin >> s >> p;

        for (ll i = 1; i * i <= p; ++i) {
            if (p % i == 0){
                ll x = i;
                ll y = p / i;
                if (x + y == s){
                    cout << "Yes" << endl;
                    return;
                }
            }
        }
        cout << "No" << endl;
	}
};
