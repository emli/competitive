#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BWOWFaktor {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        ll n = s.size();

        vector<ll> left(n + 1), right(n + 1);

        ll c = 0;
        for (int i = 0; i < n; ++i) {
            if (i + 1 < n && s[i] == 'v' && s[i + 1] == 'v'){
                c++;
            }else if (s[i] == 'o'){
                left[i] = c;
                c = 0;
            }
        }

        c = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (i - 1 >= 0 && s[i] == 'v' && s[i - 1] == 'v'){
                c++;
            }else if (s[i] == 'o'){
                right[i] = c;
                c = 0;
            }
        }

        vector<ll> leftPrefix(n + 1), rightPrefix(n + 1);

        for (int i = 0; i < n; ++i) {
            if (i - 1 >= 0)
                leftPrefix[i] = leftPrefix[i - 1] + left[i];
        }

        for (int i = n - 1; i >= 0; --i) {
            if (i + 1 < n)
                rightPrefix[i] = rightPrefix[i + 1] + right[i];
        }

        ll ans = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'o')
                ans += leftPrefix[i] * rightPrefix[i] * 1ll;
        }
        cout << ans << endl;
	}
};
