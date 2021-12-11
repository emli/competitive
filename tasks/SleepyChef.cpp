#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class SleepyChef {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,k;

        cin >> n >> k;

        string s;

        cin >> s;

        vector<int> prefixSum(n);

        for (int i = 0; i < s.size(); ++i) {
            if (i == 0){
                prefixSum[i] = (s[i] == '1');
            }else {
                prefixSum[i] += prefixSum[i - 1] + (s[i] == '1');
            }
        }
        int i = k - 1;
        int ans = 0;
        while (i < s.size()){
            if ((prefixSum[i] - ((i - k >= 0) ? prefixSum[i - k] : 0)) == 0) {
                i += k;
                ans++;
            }else {
                i++;
            }
        }

        cout << ans << endl;
	}
};
