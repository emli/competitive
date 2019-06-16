#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DEnoughArray {
public:

    int go(int pos,int& n,int& k,int& ans,vector<int>& a,vector<int>& x){
        if (pos == n){
            return 0;
        }
        if (pos < n){
            x.push_back(a[pos]);
            int sum = go(pos + 1,n,k,ans,a,x) + a[pos];
            cout << "sum = " << sum << endl;
            if (sum >= k) {
                for (int i : x) {
                    cout << i << " ";
                }
                cout << endl;
            }
            x.pop_back();
            go(pos + 1,n,k,ans,a,x);
        }
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,k;
        cin >> n >> k;
        vector<int> a(n + 1);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ans = 0;
        vector<int> x;
        go(0,n,k,ans,a,x);
        cout << ans << endl;

	}
};
