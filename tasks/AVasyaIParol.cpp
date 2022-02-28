#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AVasyaIParol {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        int countLower = count_if(all(s), [](char x){return islower(x);});
        int countUpper = count_if(all(s), [](char x){return isupper(x);});
        int countDigit = count_if(all(s), [](char x){return isdigit(x);});


        if (countLower > 0 && countUpper > 0 && countDigit > 0){
            cout << s << endl;
            return;
        }
        vector<char> req = {'U','l','1'};

        int firstLower = -1;
        int firstUpper = -1;
        int firstDigit = -1;
        if (countLower > 0) {
            req.erase(remove(all(req), 'l'), req.end());
            for (int i = 0; i < s.size(); ++i) {
                if (islower(s[i])){
                    firstLower = i;
                    break;
                }
            }
        }
        if (countUpper > 0) {
            req.erase(remove(all(req), 'U'), req.end());
            for (int i = 0; i < s.size(); ++i) {
                if (isupper(s[i])){
                    firstUpper = i;
                    break;
                }
            }
        }
        if (countDigit > 0) {
            req.erase(remove(all(req), '1'), req.end());
            for (int i = 0; i < s.size(); ++i) {
                if (isdigit(s[i])){
                    firstDigit = i;
                    break;
                }
            }
        }
        for (int i = 0; i < s.size() - req.size(); ++i) {
            string password = s.substr(i,req.size());
            string ss = s;

            for (int j = 0; j < password.size(); ++j) {
                ss[i + j] = req[j];
                countLower = count_if(all(ss), [](char x){return islower(x);});
                countUpper = count_if(all(ss), [](char x){return isupper(x);});
                countDigit = count_if(all(ss), [](char x){return isdigit(x);});


                if (countLower > 0 && countUpper > 0 && countDigit > 0){
                    cout << ss << endl;
                    return;
                }
            }
        }

        for (int i = 0; i < s.size(); ++i) {
            if (i != firstLower && i != firstUpper && i != firstDigit){
                for (char & j : req) {
                    if(j != 'X'){
                        s[i] = j;
                        j = 'X';
                    }
                }
            }
        }
        cout << s << endl;
	}
};
