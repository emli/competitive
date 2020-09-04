#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
string collect(int n) {
    string x;
    x += '1';
    for (int i = 0; i < n - 1; ++i) {
        x += '0';
    }
    return x;
}

unsigned long long get(string a, string b) {
    return stoul(a) - stoul(b);
}
class DUmenshenieSummiTsifr {
public:
    void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        auto run = [&]() {
            string n;
            int s;
            cin >> n >> s;
            vector<int> x((int) n.size());
            for (int i = 0; i < (int) n.size(); ++i) {
                x[i] = n[i] - '0';
            }
            if (accumulate(x.begin(), x.end(), 0) <= s) {
                cout << 0 << "\n";
                return;
            }
            unsigned  long long ans = get(collect((int) x.size() + 1), n);
            int sum = 0;

                for (int i = 0; i < (int) x.size(); ++i) {
                    sum += x[i];
                    if (sum != 1 && sum <= s) {
                        // cout << "collect = " << collect((int) x.size() - i) << endl;
                        // cout << "n = " << n.substr(i) << endl;
                        //q++;
                        ans = min(ans, get(collect((int) x.size() - i + 1), n.substr(i)));
                    }
                }

                cout << ans << "\n";
        };
        int tt;
        cin >> tt;
        while (tt--) {
            run();
        }
    }
};
