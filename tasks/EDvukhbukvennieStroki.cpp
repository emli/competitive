#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class EDvukhbukvennieStroki {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        vector<string> options;
        for (char i = 'a'; i <= 'k'; ++i) {
            for (char j = 'a'; j <= 'k'; ++j) {
                string option;
                option.push_back(i);
                option.push_back(j);
                options.push_back(option);
            }
        }

        unordered_map<string,vector<string>> map;
        for (int i = 0; i < (int)options.size() ; ++i) {
            for (int j = 0; j < options.size(); ++j) {
                if (i != j) {
                    int d = 0;
                    for (int k = 0; k < options[i].size(); ++k) {
                        if (options[i][k] == options[j][k]) {
                            d++;
                        }
                    }
                    if (d == 1) {
                        map[options[i]].push_back(options[j]);
                    }
                }
            }
        }

        int n;
        cin >> n;
        vector<string> y(n);

        unordered_map<string,ll> count;
        for (int i = 0; i < n; ++i) {
            string x;
            cin >> x;
            y[i] = x;
            count[x]++;
        }

        ll ans = 0;
        for (int i = (int)y.size() - 1; i >= 0; --i) {
            for (auto &j: map[y[i]]) {
                ans += count[j];
            }
            count[y[i]]--;
        }
        cout << ans << endl;
	}
};
