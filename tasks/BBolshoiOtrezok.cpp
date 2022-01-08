#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BBolshoiOtrezok {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        vector<int> x(n),y(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i] >> y[i];
        }

        int x1 = *min_element(all(x));
        int y1 = *max_element(all(y));

        for (int i = 0; i < n; ++i) {
            if (x[i] == x1 && y[i] == y1){
                cout << i + 1 << endl;
                return;
            }
        }
        cout << -1 << endl;
	}
};
