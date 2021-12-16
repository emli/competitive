#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ChefAndPal {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            string s(n, '0');

            for (int i = 0; i < s.size() / 2; ++i) {
                s[i] = '1';
            }

            cout << s << endl;
        }else {
            cout << -1 << endl;
        }
	}
};
