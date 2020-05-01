#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DMultipleOf2019 {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string s;

        cin >> s;

        int sum = 0;
        for (int i = 0; i < s.size(); ++i) {

            sum += (s[i] - '0');
            cout << sum % 3 ;
        }
	}
};
