#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BSdelaiVozrastayushchuyu {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int ans = 0;
        for (int i = n - 1; i > 0; --i) {
            while (a[i] <= a[i - 1] && a[i - 1] > 0){
                a[i - 1] /= 2;
                ans++;
            }
        }

        for (int i = 0; i < n - 1; ++i) {
            if (a[i] >= a[i + 1]){
                cout << "-1\n";
                return;
            }
        }
        cout << ans << '\n';
	}
};

