#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class CTo3 {
public:

    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string s;
        cin >> s;

        int ans = INT_MIN;
        for(int i = 1; i < (1 << s.size()); i++){
            int cur = 0;
            int len = 0;
            for(int j = 0; j < s.size(); j++)
                if (i & (1 << j)){
                    cur += s[j] - '0';
                    len++;
                }
            if (cur % 3 == 0 && len > ans){
                ans = len;
            }
        }
        if (ans == INT_MIN){
            cout << -1 << endl;
            return;
        }
        cout <<  s.size() - ans << endl;


	}
};
