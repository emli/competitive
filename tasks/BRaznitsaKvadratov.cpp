#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BRaznitsaKvadratov {
public:
    bool isPrime(ll n){
        for (ll i = 2; i * i <= n; ++i) {
            if (n % i == 0){
                return false;
            }
        }
        return true;
    }
    void run(std::istream& cin, std::ostream& cout) {
        ll a,b;
        cin >> a >> b;

        ll x = (a + b);
        ll y = (a - b);

        if ((isPrime(x) && y == 1) || (isPrime(y) && x == 1) ){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
        void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll t;

        cin >> t;

        while (t--){
            run(cin,cout);
        }
	}
};
