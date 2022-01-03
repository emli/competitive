#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class B3Palindrom {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        string s = "aabb";

        string ans;

        while (ans.size() < n){
            ans.append(s);
        }

        while (ans.size() > n){
            ans.pop_back();
        }

        cout << ans << endl;
	}
};
