#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class JMezoIgraetVZomu {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;

        cin >> n;

        string s;

        cin >> s;

        int r = count(s.begin(), s.end(), 'R');
        int l = count(s.begin(), s.end(), 'L');

        cout << r + l + 1 << endl;
    }
};


