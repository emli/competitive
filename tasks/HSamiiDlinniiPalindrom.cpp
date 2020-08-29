#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class HSamiiDlinniiPalindrom {
public:
    bool isPal(string &s){
        int l = s.size();
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != s[l - i - 1]){
                return false;
            }
        }
        return true;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,m;

        cin >> n >> m;

        vector<string> s(n);
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }

        unordered_map<string,int> unorderedMap;

        vector<string> hasPair;

        for (int i = 0; i < n; ++i) {
           string b = s[i];

           reverse(b.begin(),b.end());
           if (unorderedMap.count(b)){
               hasPair.push_back(s[i]);
               unorderedMap[b]--;
           }else {
               unorderedMap[s[i]]++;
           }
        }

        unordered_map<string,bool> used;


        for (auto &x : hasPair) {
            string b = x;
            reverse(b.begin(),b.end());

            used[x] = used[b] = true;
        }


        string ans;
        for (int i = 0; i < n; ++i) {
            if (!used.count(s[i]) && isPal(s[i])){
                ans = s[i];
                break;
            }
        }

        for (auto &x : hasPair) {
            string b = x;
            reverse(b.begin(),b.end());

            ans = x.append(ans).append(b);
        }

        cout << ans.size() << endl;
        cout << ans << endl;
	}
};

