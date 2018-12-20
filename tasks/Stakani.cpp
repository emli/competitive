#include <bits/stdc++.h>

using namespace std;

int mod = static_cast<int>(1e6);
class Stakani {
public:
    int k;

    string lastFourLetter(string s) {
        if (s.length() <= 4) {
            return s;
        }
        return s.substr(s.size() - 4);
    }
    map<pair<int,string>,int> mp;
    map<pair<int,string>,bool > used;
    int go(int c, const string &s) {
        int &res = mp[{c,s}];
        bool &use = used[{c,s}];
        if (use){
            return res;
        }
        if (c == k) {
            return res = 1;
        }
        int ans = 0;
        if (c < k) {
            for (char x : {'A', 'B'}) {
                string temp = s + x;
                temp = lastFourLetter(temp);
                if (temp == "AAAA" || temp == "BBBB") {
                    continue;
                }
                if (s.back() == x && s.length() > 0) {
                    ans += go(c + 1, temp) % mod;
                } else {
                    ans += go(c + 10, temp) % mod;
                }
            }
        }
        use = true;
        return res = ans % mod;
    }

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cin >> k;
        cout << go(0, "") << endl;
    }
};
