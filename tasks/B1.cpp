#include <bits/stdc++.h>
using namespace std;


class B1 {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        long long s = 100;

        long long k;

        cin >> k;

        int ans = 0;
        while(s < k){
            s += (s / 100);
            ans++;
        }

        cout << ans << endl;
	}
};
