#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class EMEXIInkrementi {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> d(n + 1);

        ranges:: sort(a);

        for (int i = 0; i < n; ++i) {
            d[a[i]]++;
        }

//        for (int i = 1; i <= n; ++i) {
//            d[i] += d[i - 1];
//        }

        for (int i = 0; i <= n; ++i) {

                cout <<  d[i] - i << " ";

        }
        cout << endl;
	}
};
