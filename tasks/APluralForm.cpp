#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class APluralForm {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        string s;
        cin >> s;


        if (s.back() == 's'){
            s = s + "es";
        }else {
            s = s + "s";
        }
        cout << s << endl;
	}
};
