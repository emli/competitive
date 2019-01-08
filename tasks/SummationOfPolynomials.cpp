#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sqr(x) (x) * (x)
class SummationOfPolynomials {
public:
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll x;
        while(cin >> x){
        	cout << sqr(x) * sqr(x + 1) / 4 << endl;
        }
	}
};
