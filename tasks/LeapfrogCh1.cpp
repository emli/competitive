#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class LeapfrogCh1 {
public:
    int testNumber = 0;
    void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        int d = 0;
        int b = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == 'B'){
                b++;
            }else {
                d++;
            }
        }


        cout << "Case #" << ++testNumber << ": ";
        if (d != 0 && d <= b){
            cout << "Y" << endl;
        }else {
            cout << "N" << endl;
        }
    }
};
