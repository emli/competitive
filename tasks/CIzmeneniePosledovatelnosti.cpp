#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CIzmeneniePosledovatelnosti {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        unordered_map<int,int> frequency;
        vector<int> a(n);
        int minF = INT_MAX;
        int f;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a[i] = x;
            frequency[x]++;
        }
        for (int i = 0; i < n; ++i) {

            if (frequency[a[i]] > 1 && frequency[a[i]] < minF){
                minF = frequency[a[i]];
                f = a[i];
            }
        }

        vector<int> s;
        s.push_back(0);
        for (int i = 0; i < n; ++i) {
            if (a[i] == f){
                s.push_back(i);
            }
        }
        s.push_back(n - 1);

        int ans = 0;

        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i]!=s[i + 1] && s[i] + 1 != s[i + 1]){
                ans++;
            }
        }
        cout << ans<< endl;
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
