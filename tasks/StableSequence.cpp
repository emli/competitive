#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class StableSequence {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);



        int pos = -1;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (pos == -1 || a[i] >= a[pos]){
                pos = i;
            }
        }
        if (all_of(a.begin(), a.end(), [a](int x){ return x==a[0]; })){
            cout << 0 << endl;
            return;
        }else if (pos == n - 1){
            cout << 1 << endl;
        }else {
            cout << 2 << endl;
        }
 	}
};
