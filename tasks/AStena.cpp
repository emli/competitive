#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AStena {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int x,y,a,b;
        cin >> x >> y >> a >> b;

        int t = x * y / __gcd(x,y);
        cout << b / t  - (a - 1) / t << endl;
	}
};
