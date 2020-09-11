#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BOtSKT {
public:
    static void count(vector<int> &counter, const string& s){
        for (char i : s) {
            counter[i - 'a']++;
        }
    }
    static bool isSubsequence(const string& s, string t) {
        unordered_map<char, vector<int>> hg;
        for(int i=0; i<t.length();i++) hg[t[i]].push_back(i);

        int prev = -1;
        for(auto c : s){
            auto it = hg.find(c);
            if(it == hg.end()) return false;
            auto vec = it->second;
            int pos = upper_bound(vec.begin(), vec.end(), prev) - vec.begin();
            if(pos == vec.size()) return false;
            prev = vec[pos];
        }
        return true;
    }
    void run(std::istream& cin, std::ostream& cout){
        string s,t,p;
        cin >> s >> t >> p;
        vector<int> sCounter(26),tCounter(26),pCounter(26);
        count(sCounter,s);
        count(tCounter,t);
        count(pCounter,p);

        for (char i : s) {
            if (tCounter[i - 'a'] - 1 >= 0){
                tCounter[i - 'a']--;
            }
        }

        for (char i : p) {
            if (tCounter[i - 'a'] - 1 >= 0){
                tCounter[i - 'a']--;
            }
        }

        for (int i : tCounter) {
            if (i != 0){
                cout << "NO" << endl;
                return;
            }
        }

        if (isSubsequence(s,t))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int q;
        cin >> q;

        while (q--){
            run(cin,cout);
        }
	}
};
