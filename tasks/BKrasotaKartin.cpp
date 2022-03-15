#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BKrasotaKartin {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(1001);
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a[x]++;
        }


        int ans = 0;
        while (true) {
            int res = 0;
            for (int i = 1; i <= 1000; ++i) {
                if (a[i] > 0) {
                    res++;
                    a[i]--;
                }
            }
            if (res == 0){
                break;
            }
            ans += (res - 1);
        }
        cout << ans << endl;
	}
};
