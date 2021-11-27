#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DLongestX {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s; cin >> s;
        int k; cin >> k;

        int left = 0;

        int numberOfPoints = 0;

        int ans = -1;
        for (int right = 0; right < s.size(); ++right) {
            if (s[right] == '.'){
                numberOfPoints++;
            }

            while (numberOfPoints > k && left < s.size()){
                if (s[left] == '.'){
                    numberOfPoints--;
                }
                left++;
            }
            ans = max(ans,right - left + 1);
        }
        cout << ans << endl;
	}
};
