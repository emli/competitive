#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class COtkritka {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;
        int n;
        cin >> n;

        int count = count_if(all(s), [](char x){return isalpha(x);});

        if (count == n){
            for (char i : s) {
                if (isalpha(i)){
                    cout << i;;
                }
            }
        }else if (count > n){
            int d = count - n;
            string ans;
            for (char i : s) {
                if (d > 0 && (i == '*' || i == '?')){
                    ans.pop_back();
                    d--;
                }else if (isalpha(i)){
                    ans.push_back(i);
                }
            }
            if (d == 0){
                cout << ans << endl;
            }else {
                cout << "Impossible" << endl;
            }
        }else {
            int d = n - count;
            string ans;
            for (char i : s) {
                while (d > 0 && (i == '*')){
                    ans.push_back(ans.back());
                    d--;
                }
                if (isalpha(i)){
                    ans.push_back(i);
                }
            }
            if (d == 0){
                cout << ans << endl;
            }else {
                cout << "Impossible" << endl;
            }
        }
	}
};
