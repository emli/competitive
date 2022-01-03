#include <bits/stdc++.h>
using namespace std;



typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CVinniPukhIMed {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ranges :: sort(a);

        vector<int> count(n);

        int ans = 0;
        for (int i = n - 1; i >= 0; --i) {

            for (int j = 0; j < 3; ++j) {
                if (a[i] >= k){
                    a[i] -= k;
                }
            }
            ans += a[i];
        }

        cout << ans << endl;

    }
};
