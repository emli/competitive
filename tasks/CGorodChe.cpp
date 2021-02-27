#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CGorodChe {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,r;

        cin >> n >> r;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int right = 0;

        ll ans = 0;
        for (int left = 0; left < n; ++left) {
            while (right < n && a[left] + r >= a[right]){
                right++;
            }
            ans += (n -  right);
        }
        cout << ans << endl;
	}
};
