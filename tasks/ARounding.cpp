#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ARounding {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int x,a;
        cin >> x >> a;
        if (x < a){
            cout << 0 << endl;
        }else {
            cout << 10 << endl;
        }
	}
};
