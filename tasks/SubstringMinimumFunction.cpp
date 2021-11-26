#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class SubstringMinimumFunction {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll n,m;
        cin >> n >> m;

        if (n == m){
            cout << 0 << endl;
            return;
        }
        if (m == 0){
            cout << n * (n + 1) / 2 << endl;
            return;
        }

        ll k = n / (m + 1) ;
        ll s = n % (m + 1);
        cout << m * (k * (k + 1) / 2)  + s * (s + 1) / 2<< endl;

    }
};
