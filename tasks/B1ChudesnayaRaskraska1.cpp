#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class B1ChudesnayaRaskraska1 {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int tests;
        cin >> tests;

        while (tests--) {
            string s;
            cin >> s;

            unordered_map<char, int> map;

            for (char x : s) {
                map[x]++;
            }

            vector<pair<int, char>> v;
            for (char i = 'a'; i <= 'z'; ++i) {
                v.emplace_back(map[i], i);
            }

            sort(v.rbegin(), v.rend());

            int ans = 0;

            vector<bool> used(s.size());

            for (int i = 0; i < v.size(); ++i) {
                if (v[i].first >= 2) {
                    v[i].first -= 2;
                    ans++;
                    used[i] = true;
                }
            }

            int len = 0;
            for (int i = 0; i < v.size(); ++i) {
                if (!used[i] && v[i].first >= 1) {
                    len++;
                }
            }
            ans += len / 2;

            cout << ans << endl;
        }
    }
};
