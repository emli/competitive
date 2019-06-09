#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
class ADeli {
public:
    int go(ll n,bool& ok){
        if (n == 1){
            return 0;
        }
        if (n % 2 == 0){
            return go(n / 2,ok) + 1;
        }else if (n % 3 == 0){
            return go((n / 3) * 2,ok) + 1;
        }else if (n % 5 == 0){
            return go((n / 5) * 4,ok) + 1;
        }else {
            ok = false;
            return - int(1e9);
        }
    }
    void run(std::istream& cin, std::ostream& cout){
        ll n;
        cin >> n;
        bool ok = true;
        int x = go(n,ok);
        if (!ok){
            cout << -1 << endl;
        }else{
            cout << x << endl;
        }
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int q; cin >> q; while (q--) run(cin,cout);
	}
};
