#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class Buy2Get1Free {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,x;
        cin >> n >> x;
        cout << (n / 3) * x * 2 + (n % 3) * x << endl;
	}
};
