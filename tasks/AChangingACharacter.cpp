#include <iostream>
using namespace std;

class AChangingACharacter {
public:
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,k;
        string s;
        cin >> n >> k >> s;
        s[k - 1] = tolower(s[k - 1]);
        cout << s << endl;
	}
};
