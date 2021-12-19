#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class FriendsMeetup {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int x1,x2;

        cin >> x1 >> x2;

        if (x1 == x2){
            cout << "YES" << endl;
            return;
        }

        x1 += 1;
        x2 += 2;

        if (x2 > x1){
            cout << "NO" << endl;
            return;
        }

        cout << "YES" << endl;
	}
};
