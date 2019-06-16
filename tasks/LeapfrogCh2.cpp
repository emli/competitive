#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class LeapfrogCh2 {
public:
    int testNumber = 0;

    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout << "Case #" << ++testNumber << ": ";
        int b = 0;
        int point = 0;
        string s;
        cin >> s;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == 'B'){
                b++;
            }
            if (s[i] == '.'){
                point++;
            }
        }
        if (point == 1 && s.size() == 3){
            cout << "Y" << endl;
        }else if (b >= 2 && point >= 1){
            cout << "Y" << endl;
        }else {
            cout << "N" << endl;
        }
    }
};
