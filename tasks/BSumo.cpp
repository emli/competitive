#include <iostream>
using namespace std;

class BSumo {
public:
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        string s;
        cin >> s;
        int x = 0;
        for(char x1 : s ) if(x1 == 'o') x++;

       // cout << "x =" << x <<endl;
        if (x >= 8 || x + (15 - s.size()) >= 8){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
};

