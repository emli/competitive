#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BrutalXors {
public:
    static long long binpow(long long a, long long b, long long m) {
        a %= m;
        long long res = 1;
        while (b > 0) {
            if (b & 1)
                res = res * a % m;
            a = a * a % m;
            b >>= 1;
        }
        return res;
    }

    static void solve(std::istream& cin, std::ostream& cout) {

        ll n;
        cin >> n;
        if (n == 1){
            cout << 1 << endl;
            return;
        }
        ll n1 = 2;

        ll t = 0;
        ll sum = 0;
        while (n > 0){
            sum += n % 2;
            n /= 2;
            t++;
        }

        if (sum != 1) {
            cout << binpow(n1, t, 1e9 * 1ll + 7) << endl;
        }else {
            cout << binpow(n1, t - 1, 1e9 * 1ll + 7) << endl;
        }
	}
};
