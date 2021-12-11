#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class IndivisiblePermutation {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        cout << n << " ";

        for (int i = 1; i < n; ++i) {
            cout << i << " ";
        }
        cout << endl;
	}
};
