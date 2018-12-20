#include <bits/stdc++.h>

using namespace std;

class Stakani {
public:
    int k;

    string lastFourLetter(string s) {
        if (s.length() <= 4) {
            return s;
        }
        return s.substr(s.size() - 4);
    }

    int go(int c, const string &s, const string &all) {
        if (c == k) {
            return 1;
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
                    ans += go(c + 1, temp, all + x);
                } else {
                    ans += go(c + 10, temp, all + x);
                }
            }
        }
        return ans;
    }

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cin >> k;
        cout << go(0, "", "") << endl;
    }
};

