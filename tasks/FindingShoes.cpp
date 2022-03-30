#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class FindingShoes {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;

        int left = n;
        int right = n;

        left -= m;

        if (left < 0){
            left = 0;
        }

        cout << left + right << endl;
	}
};
