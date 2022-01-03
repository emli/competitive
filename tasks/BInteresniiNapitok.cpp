#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BInteresniiNapitok {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> x(n);

        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }

        ranges :: sort(x);

        int q;
        cin >> q;

        for (int i = 0; i < q; ++i) {
            int price;
            cin >> price;
            unsigned int pos = ranges :: upper_bound(x, price) - x.begin();

            cout << pos << '\n';
      }
	}
};
