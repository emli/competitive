#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class HZukhairIStroki {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,k;
        string s;
        cin >> n >> k >> s;

        if (k == 1){
            vector<int> tmp(26);
            int localAns = 0;
            for (char i : s) {
                tmp[i - 'a']++;
                localAns = max(localAns,tmp[i - 'a']);
            }
            cout << localAns << endl;
            return;
        }


        int len = 1;
        string box;
        unordered_map<string,int> unorderedMap;

        int ans = 0;

        s.push_back('#');

        for (int i = 1; i <= n; ++i) {
            if (s[i] == s[i - 1] && len < k){
                box.push_back(s[i]);
                len++;
            }else {
                if (box.size() == k - 1) {
                    box.push_back(box.back());
                    unorderedMap[box]++;
                    ans = max(ans,unorderedMap[box]);
                }
                len = 1;
                box = "";
            }
        }

        cout << ans << endl;
	}
};
