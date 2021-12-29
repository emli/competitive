#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),(x).end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class A2Char {
public:
    static pair<bool,string> getShort(string &s){
        unordered_set<char> set;

        string shorten;
        for(char x : s){
            if (!set.count(x)){
                shorten.push_back(x);
                set.insert(x);
            }
        }

        if (set.size() > 2){
            return {false, ""};
        }
        return {true,shorten};
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        unordered_map<string,int> count;

        vector<string> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            pair<bool,string> res = getShort(a[i]);

            if (res.first) {
                count[res.second] += int(a[i].length());
            }
        }

        int ans = 0;
        for (char x = 'a'; x <= 'z'; ++x) {
            for (char y = 'a'; y <= 'z'; ++y) {
                if (x == y){
                    continue;
                }
                string a1;
                string a2;
                string a3;
                string a4;
                a1.push_back(x);
                a2.push_back(y);
                a3.push_back(x); a3.push_back(y);
                a4.push_back(y); a4.push_back(x);
                ans = max(ans,count[a1] + count[a2] + count[a3] + count[a4]);
            }
        }

        cout << ans << endl;
	}
};
