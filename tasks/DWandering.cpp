#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class DWandering {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll n;

        cin >> n;

        vector<ll> a(n),d(n),p(n);

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        d[0] = a[0];
        p[0] = a[0];

        ll mp = max(p[0],0LL);
        ll res = max(0LL,d[0]);

        for(ll i = 1; i < n; i++){
            p[i] = p[i - 1] + a[i];
            mp = max(mp,p[i]);
            d[i] += d[i - 1] + p[i];
            res = max(res,d[i - 1] + mp);
        }
        cout << res << endl;

	}
};

//n = int(input())
//a = list(map(int, input().split()))
//d = [0] * n
//        p = [0] * n
//        d[0] = a[0]
//p[0] = a[0]
//mp = max(p[0], 0)
//res = max(0, d[0])
//for i in range(1, n):
//p[i] = p[i-1] + a[i]
//mp = max(p[i], mp)
//d[i] += d[i-1] + p[i]
//res = max(res, d[i-1] + mp)
//
//print(res)