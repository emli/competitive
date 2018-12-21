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
        // cout << findMax(2,50) << endl; // 2.0365e+10

        //  assert(findMax(2,50) <= INT_MAX); exception!
        //  assert(findMax(2,50) <= LLONG_MAX);
    }

    double findMax(int width, int length) {
        vector<double> count(size_t(length + 1), 1);

        for (int i = width; i <= length; ++i) {
            count[i] = count[i - 1] + count[i - width];
        }

        return count[length];
    }
};
