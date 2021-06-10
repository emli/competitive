#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AKamennayaIgra {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;

        cin >> t;
        while (t--) {
            int n;

            cin >> n;

            vector<int> a(n);

            int maxIndex = 0;
            int minIndex = 0;
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
                if (a[i] > a[maxIndex]) {
                    maxIndex = i;
                }
                if (a[i] < a[minIndex]) {
                    minIndex = i;
                }
            }

            if (minIndex > maxIndex) {
                swap(minIndex, maxIndex);
            }

            int x1 = (minIndex + 1) + (n - maxIndex);
            int x2 = max(minIndex, maxIndex) + 1;
            int x3 = n - min(maxIndex, minIndex);
            cout << min({x1,x2,x3}) << endl;

        }


	}
};
