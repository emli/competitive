#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class ENaiboleeNestabilniiMassiv {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;

        if (n == 1){
            cout << 0 << endl;
        }else if (n == 2){
            cout << m << endl;
        } else{
            cout << 2 * m << endl;
        }
    }
        void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;

        cin >> t;

        while (t--) run(cin,cout);

	}
};
