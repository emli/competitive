#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ALavochki {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int mx = *max_element(all(a));
        int y = mx + m;


        for (int i = 0; i < m; ++i) {
            sort(all(a));
            a[0]++;
        }


        cout << *max_element(all(a)) << " " << y << endl;
	}
};
