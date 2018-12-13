#include <bits/stdc++.h>

using namespace std;

#define ll long long


class acmp320 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int length, width;
        cin >> width >> length;
        vector<ll> count(size_t(length + 1), 1);

        for (int i = width; i <= length; ++i) {
            count[i] = count[i - 1] + count[i - width];
        }

        cout << count[length] << endl;
    }
};
