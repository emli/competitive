#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BHardCalculation {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll a,b;
        cin >> a >> b;

        while (a != 0 && b != 0){
            ll x = a % 10; a /= 10;
            ll y = b % 10; b /= 10;

            if (x + y > 9){
                cout << "Hard" << endl;
                return;
            }
        }
        cout << "Easy" << endl;
	}
};
