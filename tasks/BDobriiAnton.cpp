#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BDobriiAnton {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        vector<int> a(n),b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        unordered_map<int,bool> has;

        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i] && !has[-1]){
                cout << "NO" << endl;
                return;
            }
            if (a[i] < b[i] && !has[1]){
                cout << "NO" << endl;
                return;
            }

            if (a[i] == 1){
                has[1] = true;
            }
            if (a[i] == -1){
                has[-1] = true;
            }
        }

        cout << "YES" << endl;
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
