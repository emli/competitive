#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class CGacha {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);


        int n;
        cin >> n;

        set<string> s;
        for (int i = 0; i < n; ++i) {
            string ss;
            cin >> ss;
            s.insert(ss);
        }

        cout << s.size() << endl;
	}
};
