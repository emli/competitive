#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DRaskraskaPalindromov {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> count(30);
        for (int i = 0; i < n; ++i) {
            count[s[i] - 'a']++;
        }

        vector<int> ans(k);

        int p = 0;
        int id = 0;
        for (int val : count){
            if (val % 2 == 1) {
                if (id < k)
                    ans[id++]++;
                val--;
            }
            p += val;
        }

        while (true){
            if (p >= 2 * k) {
                for (int i = 0; i < k; ++i) {
                    ans[i] += 2;
                    p -= 2;
                }
            }else {
                for (int i = 0; i < k; ++i) {
                    if (ans[i] % 2 == 0 && p > 0){
                        ans[i]++;
                        p--;
                    }
                }
                break;
            }
        }
        cout << *min_element(all(ans)) << endl;

 	}
};

