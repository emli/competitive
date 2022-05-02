#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DoubledDistances {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(all(a));

        for (int i = 1; i < n - 1; ++i) {
            if (2 * (a[i] - a[i - 1]) == (a[i + 1] - a[i]) || (a[i] - a[i - 1] == 2 * (a[i + 1] - a[i]))){
                continue;
            }else {
                cout << "No\n";
                return;
            }
        }
        cout << "Yes\n";
	}
};
