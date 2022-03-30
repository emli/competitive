#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class MaximizeTheMinimum {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (k >= n - 1){
            cout << *max_element(all(a)) << '\n';
        }else {

            sort(all(a));
            cout << a[k] << endl;
        }
    }
};
