#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CChyotnieINechyotnieInkrementi {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i += 2) {
            if (a[i] % 2 != a[0] % 2){
                cout << "NO\n";
                return;
            }
        }

        for (int i = 1; i < n; i += 2) {
            if (a[i] % 2 != a[1] % 2){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
	}
};
