#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BPalindromeWithLeadingZeros {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string s;

        cin >> s;

        while(!s.empty() && s.back() == '0'){
            s.pop_back();
        }

        reverse(s.begin(),s.end());


        while(!s.empty() && s.back() == '0'){
            s.pop_back();
        }

        string s1 = s;

        reverse(s.begin(),s.end());

        if (s1 == s){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
	}
};
