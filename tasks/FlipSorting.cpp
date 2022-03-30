#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class FlipSorting {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        string s;
        cin >> n >> s;

        int start = -1;
        int end   = -1;

        vector<pair<int,int>> ans;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1' && start == -1){
                start = i;
            }
            if (s[i] == '0' && end == -1){
                end = i - 1;

                if (end != n - 1){
                    ans.emplace_back(start + 1, end - start);
                }
            }
        }
	}
};
