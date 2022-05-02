#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ReduceTo1 {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll n;
        cin >> n;
        if (n == 1){
            cout << 0 << endl;
            return;
        }
        ll c = 0;
        while (n % 2 == 0){
            n /= 2;
            c++;
        }

        if (c == 0){
            cout << 1 << endl;
        }else if (c % 2 == 1){
            cout << -1 << endl;
        }else {
            ll d = sqrt(n);
            if (d * d == n){
                cout << 1 << endl;
            }else {
                cout << 2 << endl;
            }
        }

	}
};
