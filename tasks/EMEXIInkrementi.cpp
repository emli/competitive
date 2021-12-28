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

        ranges::sort(a);
        ranges::reverse(a);

        int prev = 0;

        for (int i = 0; i <= n; ++i) {
            int counter = 0;

            while (a.back() == i) {
                a.pop_back();
                counter++;
            }

            cout << counter + prev << " ";
            prev = counter + prev;
        }
	}
};
