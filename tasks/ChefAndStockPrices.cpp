#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ChefAndStockPrices {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        double s,a,b,c;

        cin >> s >> a >> b >> c;

        bool sign = false;
        if (c < 0){
            c *= -1;
            sign = true;
        }

        double t = c * s / 100.0;

        if (sign){
            s -= t;
        }else {
            s += t;
        }

        if (a <= s && s <= b){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
	}
};
