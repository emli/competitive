#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class CDveSkobki {
public:
    void run(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;
        unordered_map<char,int> frequency;

        int ans = 0;
        for(char x : s){
            if (x == ')' && frequency['('] > 0){
                ans++;
                frequency['(']--;
            }else if (x == ']' && frequency['['] > 0){
                ans++;
                frequency['[']--;
            }else if (x == '{' && frequency['{'] > 0){
                ans++;
                frequency['{']--;
            }else {
                frequency[x]++;
            }
        }
        cout << ans << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
