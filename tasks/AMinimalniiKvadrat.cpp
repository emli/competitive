#include <bits/stdc++.h>
using namespace std;

class AMinimalniiKvadrat {
public:
    void run(std::istream& cin, std::ostream& cout){
        int a,b;
        cin >> a >> b;

        int x = min(a,b);

        if (2 * x >= max(a,b)){
            cout << 2 * x * 2 * x << endl;
        }else {
            cout << max(a,b) * max(a,b) << endl;
        }
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--) {
            run(cin, cout);
        }

	}
};
