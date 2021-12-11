#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ListOfLists {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int,int> map;
        int maxValue = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            map[a[i]]++;
            if (map[a[i]] > maxValue) {
                maxValue = map[a[i]];
            }
        }

        if (n == 1 || maxValue == n) {
            cout << 0 << endl;
        } else if (maxValue > 1) {
            int rest = n - maxValue;
            cout << rest + 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
};
