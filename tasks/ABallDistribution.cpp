#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ABallDistribution {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,k;
        cin >> n >> k;
        
        if (k > n){
            cout << 1 << endl;
        }
        if (k == 1 || k == n){
            cout << 0 << endl;
        }else {
            int most = n - (k - 1);
            cout << most - 1 << endl;
        }
	}
};
