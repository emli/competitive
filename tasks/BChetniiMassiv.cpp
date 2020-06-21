#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BChetniiMassiv {
public:
    void run(std::istream& cin, std::ostream& cout){
        int n;
        cin >> n;
        vector<int> a(n);

        int even = 0;
        int odd = 0;

        vector<int> pos;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 != i % 2){
                if (a[i] % 2 == 0){
                    even++;
                }else {
                    odd++;
                }
                pos.push_back(i);
            }
        }

        int ans = 0;
        for(int x : pos){
            if (x % 2 == 0){
                if (even > 0){
                    even--;
                    ans++;
                }else {
                    cout << "-1" << endl;
                    return;
                }
            }else {
                if (odd > 0){
                    odd--;
                    ans++;
                }else {
                    cout << "-1" << endl;
                    return;
                }
            }
        }
        if (even + odd == 0){
            cout << ans / 2 << endl;
        }else {
            cout << -1 << endl;
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
