#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CDetektivnayaZadacha {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        int left = 0;

        for (char i : s) {
            if (i == '1' || i == '?'){
                left++;
            }else {
                break;
            }
        }

        int right = 0;
        for (int i = (int)s.size() - 1; i >= 0; --i) {
            if (s[i] == '0' || s[i] == '?'){
                right++;
            }else {
                break;
            }
        }
        int ans = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (i <= left && (s.size() - i - 1) <= right){
                ans++;
            }
        }

        cout << ans << endl;
	}
};
