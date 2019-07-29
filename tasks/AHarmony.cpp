#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class AHarmony {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a,b;
        cin >> a >> b;
        int k = (a + b) / 2;

        if (abs(a - k) == abs(b - k)){
            cout << k << endl;
        }else{
            cout << "IMPOSSIBLE" << endl;
        }
	}
};
