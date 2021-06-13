#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BVerevochki {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n, count;

        cin >> n >> count;

        vector<double> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        double left = 0;
        double right = 1e9;

        while(abs(left - right) > 0.00000001){
            double m = (left + right) / 2;

            int lineCount = 0;

            for (int i = 0; i < n; ++i) {
                lineCount += int((a[i]) / m);
            }

            if (lineCount >= count){
                left = m;
            }else {
                right = m;
            }
        }

        cout << fixed << setprecision(6) << left << endl;

	}
};
