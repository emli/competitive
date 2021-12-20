#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CNepravilnoeSlozhenie {
public:
    static int getInt(char x){
        return x - '0';
    }
    static void go(int a_pos, int s_pos, string &a, string &s, string result,string &answer){
        if (a_pos < 0 && s_pos < 0){
            answer = result;
            return;
        }
        if (a_pos < 0 ){
            string box;
            box.push_back(s[s_pos]);
            go(a_pos - 1, s_pos - 1, a, s, box + result,answer);
        }

        if (a_pos >= 0 && s_pos >= 0) {
            int x = getInt(s[s_pos]) - getInt(a[a_pos]);
            if (x >= 0) {
                string box;
                box.push_back(char(x + '0'));
                go(a_pos - 1, s_pos - 1, a, s, box + result,answer);
            }
        }

        if (a_pos >= 0 && s_pos > 0) {
            string last2digits;
            last2digits.push_back(s[s_pos - 1]);
            last2digits.push_back(s[s_pos]);
            int x = stoi(last2digits) - getInt(a[a_pos]);
            if (x <= 9 && last2digits[0] != '0') {
                string t = to_string(x);
                go(a_pos - 1, s_pos - 2, a, s, t + result, answer);
            }

        }
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        string a,b,s;

        cin >> a >> s;


        string result;
        string answer = "-1";
        go(a.size() - 1,s.size() - 1,a,s,result,answer);

        while (answer[0] == '0'){
            answer.erase(0,1);
        }

        if (answer.empty()) answer = "0";
        cout << answer << endl;
	}
};


