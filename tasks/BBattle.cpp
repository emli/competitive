#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class BBattle {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int a,b,c,d;

        cin >> a >> b >> c >> d;


        while (c > 0 && a > 0) {
            c -= b;
            if (c <= 0) {
                cout << "Yes" << endl;
                return;
            }

            a -= d;
            if (a <= 0) {
                cout << "No" << endl;
                return;
            }
        }

	}
};
