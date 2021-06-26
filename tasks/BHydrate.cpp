#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BHydrate {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll a,b,c,d;
        cin >> a >> b >> c >> d;


        ll x1 = a;
        ll x2 = 0;
        for (int i = 0; i < 1e7; ++i) {
            if (d * x2 >= x1){
                cout << i << endl;
                return;
            }
            x1 += b;
            x2 += c;
        }
        cout << -1 << endl;
    }
};
