#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CanYouEatIt {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int a,b;
        cin >> a >> b;

        if (a % b == 0){
            cout << a / b << endl;
        }else {
            cout << -1 << endl;
        }
	}
};
