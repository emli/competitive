#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AKvadratnayaStroka {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        if (s.substr(0,s.size() / 2) + s.substr(0,s.size() / 2) == s){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
};
