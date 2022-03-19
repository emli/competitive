#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CSbalansirovannayaKomanda {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int,int> map;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            map[a[i]]++;
        }

        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int cur = 0;
            for (int j = a[i]; j <= a[i] + 5; ++j) {
                cur += map[j];
            }
            ans = max(ans,cur);
        }
        cout << ans << endl;
	}
};
