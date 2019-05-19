#include <string>
#include <iostream>
using namespace std;

class BYYMMOrMMYY {
public:
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        string s;
        cin >> s;
        bool ok1 = false,ok2 = false;

        string first  = s.substr(0,2);
        string second = s.substr(2,2);
        if ("00" < second && second <= "12"){
            ok1 = true;
        }
        if ("00" < first && first <= "12"){
            ok2 = true;
        }

        if (ok1 && ok2){
            cout << "AMBIGUOUS" << endl;
        }else if (ok1){
            cout << "YYMM" << endl;
        }else if (ok2){
            cout << "MMYY" << endl;
        }else {
            cout << "NA" << endl;
        }
	}
};
