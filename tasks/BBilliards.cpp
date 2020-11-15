#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BBilliards {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout <<fixed << setprecision(10)<<(y2 * x1 + y1 * x2) / (y1 + y2) * 1.0 << endl;

	}
};
