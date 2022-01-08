#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CPrigayushchayaLyagushka {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        int ans = 0;
        vector<int> a = {0, (int)s.size() + 1};
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'R'){
                a.push_back(i + 1);
            }
        }

        sort(all(a));
        for (int i = 1; i < a.size(); ++i) {
            ans = max(ans,a[i] - a[i - 1]);
        }


        cout << ans << endl;
    }
};
