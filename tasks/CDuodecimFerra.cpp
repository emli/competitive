#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CDuodecimFerra {
public:
    ll go(int n,int pos,int cut){
        if (cut == n - 1){
            return 1;
        }
        ll ans = 0;
        for(int i = pos + 1; i < n; i++){
            ans += go(n,i,cut + 1);
        }
        return ans;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin >> n;
        cout << go(n,0,0) << endl;

	}
};
