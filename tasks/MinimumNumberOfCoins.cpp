#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class MinimumNumberOfCoins {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        if (n % 10 == 0){
            cout << n / 10 << endl;
        }else if (n % 10 == 5){
            cout << n / 10 + 1 << endl;
        }else {
            cout << -1 << endl;
        }
	}
};
