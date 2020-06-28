#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class ANeobkhodimiiOstatok {
public:
    void run(std::istream& cin, std::ostream& cout){
        int x,y,n;
        cin >> x >> y >> n;
        if ((n / x) * x + y <= n)
            cout << (n / x) * x + y << endl;
        else
            cout << (((n)/ x)-1) * x + y << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
