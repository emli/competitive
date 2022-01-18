#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class D1VseOdinakovie {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        unordered_map<int,set<int>> count;

        int mn = *ranges:: min_element(a);

        int xx = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == mn){
                continue;
            }

            int d = abs(a[i] - mn);
            xx++;
            for (int j = 1; j * j <= d ; ++j) {
                if (d % j == 0){
                    int x = j;
                    int y = d / x;
                    count[x].insert(i);
                    count[y].insert(i);
                }
            }
        }
        int mx = -1;
        for (auto const& [key, val] : count)
        {
            if (val.size() == xx){
                mx = max(mx,key);
            }
        }

        cout << mx << endl;
	}
};
