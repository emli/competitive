#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class MinimumNumberOfPizzas {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,k;
        cin >> n >> k;

        n /= __gcd(n,k);
        k /= __gcd(n,k);

        if (n == k){
            cout << 1 << endl;
        }else
            cout << n  << endl;
	}
};
