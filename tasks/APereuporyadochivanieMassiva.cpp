#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class APereuporyadochivanieMassiva {
public:
    void run(std::istream& cin, std::ostream& cout){
        int n,x;
        cin >> n >> x;

        vector<int> a(n),b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        sort(all(a));
        sort(all(b));
        reverse(all(b));

        for (int i = 0; i < n; ++i) {
            if (a[i] + b[i] > x){
                cout << "No" << endl;
                return;
            }
        }
        cout << "Yes" << endl;

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
