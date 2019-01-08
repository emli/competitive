#include <bits/stdc++.h>
using namespace std;

class BeatTheSpread {
public:
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int x,y;
        int t;
        cin >> t;
        while (t--){
            cin >> x >> y;
            int a = (x + y) / 2;
            int b = x - a;

            if (a + b == x && a - b == y && a >= 0 && b >= 0){
                cout << a << " " << b << endl;
            }else {
                cout << "impossible" << endl;
            }
        }

	}
};
