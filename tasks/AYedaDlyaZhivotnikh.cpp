#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AYedaDlyaZhivotnikh {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int a,b,c,x,y;
        cin >> a >> b >> c >> x >> y;

        x -= min(a,x);
        y -= min(b,y);

        int t = min(c,x);
        x -= t;
        c -= t;

        y -= min(c,y);

        if (x == 0 && y == 0){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
	}
};
