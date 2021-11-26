#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CanReach {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int a,b,k;
        cin >> a >> b >> k;

        if (abs(a) % k == 0 && abs(b) % k == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
	}
};
