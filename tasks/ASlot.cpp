#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ASlot {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string s;
        cin >> s;
        set<char> set1(all(s));

        if (set1.size() == 1){
            cout << "Won" ;
        }else {
            cout << "Lost" ;
        }
	}
};
