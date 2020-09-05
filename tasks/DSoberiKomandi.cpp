#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.rbegin(),x.rend()
class DSoberiKomandi {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n,x;
        cin >> n >> x;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(all(a));

        int count = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int curMin = a[i];
            count++;
            if (curMin * count >= x){
                ans++;
                count = 0;
            }
        }
        cout << ans << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
