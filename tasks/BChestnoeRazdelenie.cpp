#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BChestnoeRazdelenie {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        int two = 0;
        int one = 0;
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 2){
                two++;
            }else {
                one++;
            }
            sum += a[i];
        }

        if (sum % 2 == 0){
            sum = sum / 2;

            for (int i = 0; i <= two; ++i) {
                for (int j = 0; j <= one; ++j) {
                    if (i * 2 + j == sum){
                        cout << "YES\n";
                        return;
                    }
                }
            }
            cout << "NO\n";
        }else {
            cout << "NO" << endl;
        }
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
