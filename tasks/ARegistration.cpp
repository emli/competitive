#include <bits/stdc++.h>
using namespace std;

class ARegistration {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string s,t;

        cin >> s >> t;

        if (s.find(t) != -1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
	}
};
