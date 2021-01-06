#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AOtkritkiDlyaDruzei {
public:
    void run(std::istream& cin, std::ostream& cout) {
        ll w,h,n;
        cin >> w >> h >> n;
        ll c = 1;
        while (w % 2 == 0){
            w /= 2;
            c *= 2;
        }

        while (h % 2 == 0){
            c *= 2;
            h /= 2;

        }

        if (c >= n){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
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
