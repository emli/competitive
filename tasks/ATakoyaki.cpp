#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class ATakoyaki {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,x,t;
        cin >> n >> x >> t;

        int ans = 0;
        while (n > 0){
            ans += t;
            n -= x;
        }
        cout << ans << endl;
	}
};
