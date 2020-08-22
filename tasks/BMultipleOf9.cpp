#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BMultipleOf9 {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        string s;
        cin >> s;

        int sum = 0;
        for(char x : s){
            sum += (x - '0');
        }
        if (sum % 9 == 0){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
	}
};
