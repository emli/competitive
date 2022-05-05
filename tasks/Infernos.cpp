#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class Infernos {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        int single = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            single += a[i] / x + (a[i] % x > 0);
        }

        int multi = *max_element(all(a));

        cout << min(single,multi) << endl;

	}
};
