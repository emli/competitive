#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ATheMiracleAndTheSleeper {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll tests;
        cin >> tests;


        while (tests--){
            ll a,b;
            cin >> a >> b;

            ll left = a;
            ll right = b;
            ll m = (right) / 2;

            if (m >= left){
                cout << max( {right % m, (right-1) % m, right % (m+1)}) << endl;
            }else {
                cout << right % left << endl;
            }
        }
	}
};

