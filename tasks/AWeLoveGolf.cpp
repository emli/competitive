#include <bits/stdc++.h>
using namespace std;

class AWeLoveGolf {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int k,a,b;

        cin >> k >> a >> b;

        for (int i = a; i <= b; ++i) {
            if (i % k == 0){
                cout << "OK" << endl;
                return;
            }
        }
        cout << "NG" << endl;
	}
};
