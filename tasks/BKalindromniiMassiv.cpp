#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BKalindromniiMassiv {
public:
    static bool go(int l,int r, set<int> &d,vector<int> &a){
        if (d.size() > 1){
            return false;
        }
        if (l >= r){
            return d.size() <= 1;
        }
        if (a[l] == a[r]){
            return go(l + 1, r - 1,d,a);
        }
        set<int> d1 = d;
        set<int> d2 = d;
        d1.insert(a[r]);
        d2.insert(a[l]);
        return go(l, r - 1,d1,a) || go(l + 1, r,d2,a);
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        set<int> d;
        if (go(0,n - 1,d,a)){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
};
