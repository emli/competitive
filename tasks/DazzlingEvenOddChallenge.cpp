#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DazzlingEvenOddChallenge {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll sum = accumulate(all(a),0L);

        if ((sum - n / 2) % n == 0){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }

	}
};
