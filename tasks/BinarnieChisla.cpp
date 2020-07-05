#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BinarnieChisla {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;

        while (n % 2 == 0 && n > 0){
            n = n / 2;
        }
        if (n == 1){
            cout << "YES";
        }else {
            cout << "NO";
        }
	}
};
