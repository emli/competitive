#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AWeirdFunction {
public:
    static ll f(ll x){
        return x * x + 2 * x + 3;
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        ll n;
        cin >> n;
        cout << f(f(f(n) + n) + f(f(n))) << endl;
	}
};
