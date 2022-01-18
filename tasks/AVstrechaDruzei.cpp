#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AVstrechaDruzei {
public:
    static vector<ll> intersection(vector<ll> a,vector<ll> b){
        ll start = max(a[0],b[0]);
        ll end   = min(a[1],b[1]);

        if (start <= end){
            return {start,end};
        }
        return {};
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        ll l1,r1,l2,r2,k;
        cin >> l1 >> r1 >> l2 >> r2 >> k;

        vector<ll> part = intersection({l1,r1},{l2,r2});

        if (part.empty()){
            cout << 0 << endl;
        }else {
            cout << part[1] - part[0] - (part[0] <= k && k <= part[1]) + 1 << endl;
        }
	}
};
