#include <iostream>
using namespace std;

class ASumOfInteriorAngles {
public:
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        cout << (n - 2) *(180) << endl;
	}
};
