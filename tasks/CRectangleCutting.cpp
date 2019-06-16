#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

class CRectangleCutting {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        double a,b,x,y;
        cin >> a >> b >> x >> y;
        if (a == b){
            cout << fixed << setprecision(10) << (a * b) / 2.0 << " " << 1 << endl;
        }else {
            cout << fixed << setprecision(10) << (a * b) / 2.0 << " " << 0 << endl;
        }
	}
};
