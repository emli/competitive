#include <bits/stdc++.h>
using namespace std;

class BEasyLinearProgramming {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        long long a,b,c,k;
        cin >> a >> b >> c >> k;

        if (a >= k){
            cout << k << endl;
        }else {
            cout << a -(k - (a +b))<< endl;
        }

	}
};
