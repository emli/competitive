#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ChefAndBirdFarm {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int x,y,z;
        cin >> x >> y >> z;

        int lcm = (x * y) / __gcd(x,y);
        if (z % lcm == 0){
            cout << "ANY\n";
        }else if (z % x == 0){
            cout << "CHICKEN\n";
        }else if (z % y == 0){
            cout << "DUCK\n";
        }else {
            cout << "NONE\n";
        }
	}
};
